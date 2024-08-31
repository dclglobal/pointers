#include <iostream>
using namespace std;

int main() {
    // Declare three integer variables
    int num1, num2, num3;

    // User input three integer values
    cout << "Enter the first integer: ";
    cin >> num1;

    cout << "Enter the second integer: ";
    cin >> num2;

    cout << "Enter the third integer: ";
    cin >> num3;

    // Create integer pointers and allocate dynamic memory
    int* ptr1 = new int;
    int* ptr2 = new int;
    int* ptr3 = new int;

    // Store the values into the dynamically allocated memory
    *ptr1 = num1;
    *ptr2 = num2;
    *ptr3 = num3;

    // Display the contents of the variables and pointers
    cout << "\nValues of the variables:\n";
    cout << "num1: " << num1 << "\n";
    cout << "num2: " << num2 << "\n";
    cout << "num3: " << num3 << "\n";

    cout << "\nValues pointed to by the pointers:\n";
    cout << "*ptr1: " << *ptr1 << "\n";
    cout << "*ptr2: " << *ptr2 << "\n";
    cout << "*ptr3: " << *ptr3 << "\n";

    // Clean up the dynamically allocated memory
    delete ptr1;
    delete ptr2;
    delete ptr3;

    return 0;
}