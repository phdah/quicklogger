#pragma once

#include "components.h"

class Entity {
public:
    PickerComponent pickerComponent;
    InputComponent inputComponent;
    LLMQueryComponent llmQueryComponent;
    ResultComponent resultComponent;
};
