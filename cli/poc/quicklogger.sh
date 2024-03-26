#!/bin/sh

pickers=$(printf "TODO\nLOG")
selected=$(echo "$pickers" | fzf)
echo $selected

read -p "Prompt: " prompt

python3.10 web_scraping.py "$prompt" | tee scrape.txt | python3.10 llm.py | python3.10 format.py $selected "$prompt"
