import requests, validators, sys
from bs4 import BeautifulSoup

basePrompt = """Summarize this in one short sentence:
```"""

# URL to scrape, or message
input = sys.argv[1]

if validators.url(input):
    url = input
    # Custom headers using a user-agent string that mimics a web browser
    headers = {
        'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/58.0.3029.110 Safari/537.3',
        'Accept': 'text/html,application/xhtml+xml,application/xml;q=0.9,image/webp,*/*;q=0.8',
        'Accept-Language': 'en-US,en;q=0.5',
        'Referer': 'https://www.google.com/'
    }

    # Send a GET request to the URL
    # Initialize a session
    session = requests.Session()
    session.headers.update(headers)

    response = session.get(url)

    # Create a BeautifulSoup object from the response text
    if response.status_code != 200:
        print(f"Failed to fetch the page. Status code: {response.status_code}")
    else:
        soup = BeautifulSoup(response.text, 'html.parser')

        # Find all paragraph tags in the HTML
        paragraphs = soup.find_all('p')
        meta_description_tag = soup.find('meta', attrs={'name': 'description'})

        # Print out the text of each paragraph
        print(basePrompt)
        if meta_description_tag:
            print(f"Page description: {meta_description_tag.get('content')}")
        if paragraphs:
            for paragraph in paragraphs:
                if paragraph.text:
                    print(paragraph.text)
        if not meta_description_tag and not paragraphs:
            print(url)
            print("Failed to scrape the web page")
        print('```')
else:
    print(basePrompt)
    print(input)
    print('```')

