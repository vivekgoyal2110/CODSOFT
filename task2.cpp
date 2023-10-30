#include <iostream>
using namespace std;

double add(double x, double y) {
    return x + y;
}

double subtract(double x, double y) {
    return x - y;
}

double multiply(double x, double y) {
    return x * y;
}

double divide(double x, double y) {
    if (y == 0) {
        cout << "Invalid Operation!" << endl;
        return 0;
    }
    return x / y;
}

int main() {
    char operation;
    double num1, num2;

    cout<<"\t\t\t!!!BASIC CALCULATOR!!!\n\n";
    cout << "Enter '+' for addition" << endl;
    cout << "Enter '-' for subtraction" << endl;
    cout << "Enter '*' for multiplication" << endl;
    cout << "Enter '/' for division" << endl;
    cout << "Enter your choice: ";
    cin >> operation;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    switch (operation) {
        case '+':
            cout << "Result: " << add(num1, num2) << endl;
            break;
        case '-':
            cout << "Result: " << subtract(num1, num2) << endl;
            break;
        case '*':
            cout << "Result: " << multiply(num1, num2) << endl;
            break;
        case '/':
            cout << "Result: " << divide(num1, num2) << endl;
            break;
        default:
            cout << "Invalid input" << endl;
    }
    return 0;
}
