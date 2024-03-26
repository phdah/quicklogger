import sys, datetime

# Get the current datetime object
currentDatetime = datetime.datetime.now()

# Picker for prompt
pickerType = sys.argv[1]
prompt = sys.argv[2]
llmResult = sys.stdin.read().strip()

if pickerType == "TODO":
    result = f"* [ ] {llmResult}\n"
    # TODO: pickup the file path from a cli config
    with open("todo.md", "a") as f:
        f.write(result)
elif pickerType == "LOG":
    result = f"{currentDatetime} : {prompt} : {llmResult}\n"
    # TODO: pickup the file path from a cli config
    with open("log.txt", "a") as f:
        f.write(result)
else:
    result = llmResult

print(result)
