#include "entity.h"
#include "systems.h"

#include <iostream>

int main(int argc, char** argv) {
    Entity entity;

    // Initialize systems
    PickerSystem pickerSystem;
    InputSystem inputSystem;
    /* LLMQuerySystem llmQuerySystem; */
    /* ResultSystem resultSystem; */

    // Process systems
    pickerSystem.process(entity);
    inputSystem.process(entity);
    /* llmQuerySystem.process(entity); */
    /* resultSystem.process(entity); */

    // Print results for development
    entity.pickerComponent.print();
    entity.inputComponent.print();

    return 0;
}
