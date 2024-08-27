#include<iostream>
using namespace std;
int main() {
    char operation;
    double num1, num2, result;

    // Displaying the menu
    cout << "Select operation (+, -, *, /): ";
    cin >> operation;

    // Checking if the operation is valid
    if (operation != '+' && operation != '-' && operation != '*' && operation != '/') {
        cout << "Error! Operation not recognized." << endl;
        return 1;
    }

    // Input numbers
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // Performing the operation
    switch(operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            // Checking for division by zero
            if (num2 == 0) {
                cout << "Error! Division by zero." << endl;
                return 1;
            }
            result = num1 / num2;
            break;
    }

    // Displaying the result
    cout << "Result: " << result << endl;

    return 0;
}