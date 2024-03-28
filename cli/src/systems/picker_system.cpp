#include "systems.h"
#include <iostream>

void PickerSystem::process(Entity &entity) {
    // Setup picker
    // TODO: We will build or integrate our own picker frontend, but as of now
    // we will make use of input args, to use CLI based picker `fzf`
    std::cout << "Select template (TODO/LOG): ";


    #ifdef DEBUG_FLAG
    entity.pickerComponent.selectedPicker = "TODO";
    #else
    std::getline(std::cin, entity.pickerComponent.selectedPicker);
    #endif

}

