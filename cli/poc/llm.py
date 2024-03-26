import requests, json, sys

# The URL of the local REST API endpoint of Ollama
url = "http://localhost:11434/api/generate"

if len(sys.argv) > 1:
    # Command-line arguments exist, use the first one as the prompt
    prompt = sys.argv[1]
else:
    # No command-line arguments, attempt to read from stdin
    # This is for piping results to the script
    prompt = sys.stdin.read().strip()  #

data = {
    "model": "mistral",
    "prompt": prompt
}

response = requests.post(url, json=data)

if response.status_code == 200:
    # The API may return a sequence of JSON objects; we concatenate them to
    # form the complete response
    complete_response = ""

    for line in response.text.splitlines():
        json_response = json.loads(line)

        complete_response += json_response["response"]

        # Loop until we get the "done" response
        if json_response.get("done", False):
            break

    print(complete_response)
else:
    print("Failed to get response from the API, status code:", response.status_code)
