#pragma once

#include "entity.h"

class PickerSystem {
public:
    void process(Entity &entity);
};

class InputSystem {
public:
    void process(Entity &entity);
    const std::string getPrompt(Entity &entity);
    bool isValidURL(const std::string &url);
    const std::string webScrape(const std::string &url);

};

class LLMQuerySystem {
public:
    void process(Entity &entity);
};

class ResultSystem {
public:
    void process(Entity &entity);
};

