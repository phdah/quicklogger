#include "entity.h"
#include "systems.h"

#include <iostream>

int main(int argc, char** argv) {
    Entity entity;
    PickerSystem pickerSystem;

    pickerSystem.process(entity);

    entity.pickerComponent.print();

    return 0;
}
