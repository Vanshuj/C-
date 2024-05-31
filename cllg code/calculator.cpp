#include <iostream>
using namespace std;

// Function prototypes
void displayMenu();
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

int main() {
    char operation;
    double num1, num2;
    bool running = true;

    while (running) {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> operation;

        if (operation == 'q' || operation == 'Q') {
            running = false;
            cout << "Exiting the calculator. Goodbye!" << endl;
            break;
        }

        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;

        switch(operation) {
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
                if (num2 != 0) {
                    cout << "Result: " << divide(num1, num2) << endl;
                } else {
                    cout << "Error: Division by zero!" << endl;
                }
                break;
            default:
                cout << "Invalid operation. Please try again." << endl;
                break;
        }
    }

    return 0;
}

void displayMenu() {
    cout << "Simple Calculator" << endl;
    cout << "-----------------" << endl;
    cout << "Choose an operation:" << endl;
    cout << "+ : Addition" << endl;
    cout << "- : Subtraction" << endl;
    cout << "* : Multiplication" << endl;
    cout << "/ : Division" << endl;
    cout << "q : Quit" << endl;
}

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
    return a / b;
}


// // using switch case


// #include <iostream>

// using namespace std;

// int main() {
//     char operatorSymbol;
//     double num1, num2;

//     cout << "Enter an operator (+, -, *, /): ";
//     cin >> operatorSymbol;

//     cout << "Enter two numbers: ";
//     cin >> num1 >> num2;

//     switch (operatorSymbol) {
//         case '+':
//             cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
//             break;
//         case '-':
//             cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
//             break;
//         case '*':
//             cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
//             break;
//         case '/':
//             if (num2 == 0) {
//                 cout << "Error: Division by zero!" << endl;
//             } else {
//                 cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
//             }
//             break;
//         default:
//             cout << "Invalid operator!" << endl;
//     }

//     return 0;
// }


// //  if else statement


// #include <iostream>

// using namespace std;

// int main() {
//     char operatorSymbol;
//     double num1, num2;

//     cout << "Enter an operator (+, -, *, /): ";
//     cin >> operatorSymbol;

//     cout << "Enter two numbers: ";
//     cin >> num1 >> num2;

//     if (operatorSymbol == '+') {
//         cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
//     } else if (operatorSymbol == '-') {
//         cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
//     } else if (operatorSymbol == '*') {
//         cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
//     } else if (operatorSymbol == '/') {
//         if (num2 == 0) {
//             cout << "Error: Division by zero!" << endl;
//         } else {
//             cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
//         }
//     } else {
//         cout << "Invalid operator!" << endl;
//     }

//     return 0;
// }