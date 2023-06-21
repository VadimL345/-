#include "CorrectInput.h"

int getValidPositiveIntegerInput(const string& str) {
    cout << str;
    string inputStr;
    int input;
    bool isValidInput = false;
    while (!isValidInput) {
        isValidInput = true;
        getline(cin, inputStr);
        if (!inputStr.empty()) {
            for (int i = 0; i < inputStr.length(); i++)
                if (!isdigit(inputStr[i])) {
                    isValidInput = false;
                }
        } else
            isValidInput = false;
        if(isValidInput && stoi(inputStr) == 0)
            isValidInput = false;
        if(!isValidInput)
            cout << "Invalid input. Please enter a valid integer: ";
    }
    input = stoi(inputStr);
    return input;
}

double getRealPositiveNumberInput(const string& str) {
    cout << str;
    string inputStr;
    double input;
    bool isValidInput = false;
    while (!isValidInput) {
        isValidInput = true;
        getline(cin, inputStr);
        if (!inputStr.empty()) {
            for (int i = 0; i < inputStr.length(); i++)
                if (isalpha(inputStr[i])) {
                    isValidInput = false;
                }

        } else
            isValidInput = false;
        if(isValidInput && stoi(inputStr) < 0)
            isValidInput = false;
        if(!isValidInput)
            cout << "Invalid input. Please enter a correct number: ";
    }
    input = stod(inputStr);
    return input;
}

double getRealNumberInput(const string& str) {
    cout << str;
    string inputStr;
    double input;
    bool isValidInput = false;
    while (!isValidInput) {
        isValidInput = true;
        getline(cin, inputStr);
        if (!inputStr.empty()) {
            for (int i = 0; i < inputStr.length(); i++)
                if (isalpha(inputStr[i])) {
                    isValidInput = false;
                }

        } else
            isValidInput = false;
        if(!isValidInput)
            cout << "Invalid input. Please enter a correct number: ";
    }
    input = stod(inputStr);
    return input;
}