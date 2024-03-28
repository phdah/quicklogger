#include "systems.h"
#include <iostream>

#include <curl/curl.h>

/* @brief get the user input, with debug default
 * @todo we will build a UI for interacting with the system, but uses the
 * terminal for inputting the prompt for now
*/
const std::string InputSystem::getPrompt(Entity &entity) {
    std::string userInput;

    // Get user input
    std::cout << "Prompt: ";

    #ifdef DEBUG_FLAG
    userInput = "Entity Component System (ECS)";
    #else
    std::getline(std::cin, userInput);
    #endif

    return userInput;

}

/* @brief validates urls on the format https://www.example.com */
bool InputSystem::isValidURL(const std::string &url) {
    CURLU *curlu = curl_url();
    CURLUcode res = curl_url_set(curlu, CURLUPART_URL, url.c_str(), 0);
    curl_url_cleanup(curlu); // Clean up the CURLU handler
    return (res == CURLUE_OK);
}

/* @brief web scrape URL */
const std::string InputSystem::webScrape(const std::string &url) {
    // TODO: Add web scraping here
    return "URL: " + url;
}

/* @brief prepare prompt from user input, either by scraping a URL, or just passing
 * the input as is */
void InputSystem::process(Entity &entity) {
    std::string prompt;

    const std::string userInput = getPrompt(entity);
    bool isURL = isValidURL(userInput);

    if (isURL) {
        prompt = webScrape(userInput);
    } else {
        prompt = userInput;
    }

    entity.inputComponent.prompt = prompt;

}


