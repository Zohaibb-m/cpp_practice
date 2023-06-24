// Make a calculator in cpp using switch case for 
// addition, subtraction, multiplication, division and modulus.

// Sample Output:
// Calculator
// 1. Addition
// 2. Subtraction
// 3. Multiplication
// 4. Division
// 5. Modulus
// Enter your choice: 1
// Enter two numbers: 5 6
// 5 + 6 = 11
// Do you want to continue? (y/n): y
// 1. Addition
// 2. Subtraction
// 3. Multiplication
// 4. Division
// 5. Modulus
// Enter your choice: 2
// Enter two numbers: 5 6
// 5 - 6 = -1
// Do you want to continue? (y/n): y
// 1. Addition
// 2. Subtraction
// 3. Multiplication
// 4. Division
// 5. Modulus
// Enter your choice: 5
// Enter two numbers: 5 6
// 5 % 6 = 5
// Do you want to continue? (y/n): n
// Thank you for using the calculator!

#include <iostream>
using namespace std;

int main() {
    char choice;
    do {
        cout << "Calculator" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Modulus" << endl;
        cout << "Enter your choice: ";

        int op;
        cin >> op;

        long num1, num2, x;
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        switch (op) {
            case 1:
                x = num1 + num2;
                cout << "By Adding = " << x;
        break;
            case 2:
                x = num1 - num2;
                cout << "By Subtracting = " << x;
        break;

            case 3:
                x = num1 * num2;
                cout << "By Multiplying = " << x;
        break;
            case 4:
                x = num1 / num2;
                cout << "By Dividing = " << x;
        break;
            case 5:
                x = num1 % num2;
                cout << "Modulus = " << x;
        break;
            
            default:
                cout << "Invalid choice!" << endl;
                break;
        }

        cout << "\n Do you want to continue? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "Thank you for using the calculator!" << endl;

    return 0;
}

