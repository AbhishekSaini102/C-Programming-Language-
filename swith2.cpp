#include <iostream>
using namespace std;

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b != 0)
        return a / b;
    else {
        cout << "Error! Division by zero is not allowed.";
        return 0;
    }
}

int main() {
    double num1, num2;
    char operation, redo;
    do {
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the operation (+, -, *, /): ";
        cin >> operation;
        cout << "Enter the second number: ";
        cin >> num2;

        switch(operation) {
            case '+':
                cout << "The result is: " << add(num1, num2);
                break;
            case '-':
                cout << "The result is: " << subtract(num1, num2);
                break;
            case '*':
                cout << "The result is: " << multiply(num1, num2);
                break;
            case '/':
                cout << "The result is: " << divide(num1, num2);
                break;
            default:
                cout << "Invalid operation!";
        }

        cout << "\nDo you want to do another calculation? (Y/N)";
        cin >> redo;
    } while (redo == 'Y' || redo == 'y');

    return 0;
}
