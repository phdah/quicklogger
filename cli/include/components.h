#pragma once

#include <iostream>

class PickerComponent {
public:
    std::string selectedPicker;

    // Helper functions for picker selectino
    const std::string get() {
        return selectedPicker;
    }

    void print() {
        std::cout << "Picker selection: " << selectedPicker << std::endl;
    }

};

class InputComponent {
public:
    std::string data;
};

class LLMQueryComponent {
public:
    std::string prompt;
};

class ResultComponent {
public:
    std::string rawResult;
    std::string formattedResult;
};
