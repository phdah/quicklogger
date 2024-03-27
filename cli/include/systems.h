#pragma once

#include "entity.h"

class PickerSystem {
public:
    void process(Entity &entity);
};

class InputSystem {
public:
    void process(Entity &entity);
};

class LLMQuerySystem {
public:
    void process(Entity &entity);
};

class ResultSystem {
public:
    void process(Entity &entity);
};

