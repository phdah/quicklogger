# QuickLogger

I often find myself hearing or reading about some tool or concept that I instantly know I _need_ to read more about. Then I typically write the `url` or `name` to myself on _Slack_, but often loose context once I get to looking it up. That's why I _need_ the `QuickLogger`, which easily and sufficiently summarizes concepts and tools into a log, `automatically` for me, which I can later filter and consume.

## Requires

- Locally [Ollama](https://ollama.ai/) with the model [`mistral`](https://ollama.ai/library/mistral)
- [curl](https://curl.se/) CLI

## What is QuickLogger?

This project presents a powerful Command-Line Interface (CLI) tool built in C++, designed to summarize text and extract key concepts from either direct text input or content retrieved from web links. Utilizing an open source and locally running [Ollama](https://ollama.ai/) LLM, this tool efficiently and asynchronously processes input text to provide concise summaries and identify core concepts, enhancing readability and comprehension. Additionally, when provided with a URL, it skillfully scrapes the corresponding website to summarize the content found within, alongside any text input provided by the user.

## Roadmap

* [x] POC the initial CLI using Python for fast development
* [ ] Rewrite module(s) in `c++`
* [ ] POC a frontend for the output, e.g., `TODO`'s and `LOG`'s
* [ ] Define a fronted, reachable without the terminal, to interact with the QuickLogger CLI, to add entries with proper pickers

| Feature | Status ✅ / 🟨 |
| --- | --- |
| Output logs in a proper database | 🟨 |
| Make the databse reachable from the cli, to extract or view the data | 🟨 |

