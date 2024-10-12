#include <iostream>
using namespace std;

int main() {
  
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    int remainder = number % 7;
    cout << "The remainder when " << number << " is divided by 7 is: " << remainder << endl;

   
    int num1, num2;
    cout << "Enter two integers: " << endl;
    cout << "First number: ";
    cin >> num1;
    cout << "Second number: ";
    cin >> num2;

    if (num2 != 0) {
        if (num1 % num2 == 0) {
            cout << num1 << " is divisible by " << num2 << " without a remainder." << endl;
        } else {
            cout << num1 << " is not divisible by " << num2 << " without a remainder." << endl;
        }
    } else {
        cout << "Division by zero is not allowed." << endl;
    }

    if (num1 % 2 == 0) {
        cout << num1 << " is even." << endl;
    } else {
        cout << num1 << " is odd." << endl;
    }

    if (num2 % 2 == 0) {
        cout << num2 << " is even." << endl;
    } else {
        cout << num2 << " is odd." << endl;
    }

    return 0;
}
