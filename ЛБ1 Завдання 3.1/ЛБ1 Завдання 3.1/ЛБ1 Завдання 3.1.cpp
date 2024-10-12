/*Завдання 3. Напишіть програму, яка приймає ціле число та виводить
це число до та після його інкрементації та
декрементації (використовуйте як префіксну, так і постфіксну форми)*/

#include <iostream>
using namespace std;

int main() {
    int number;


    cout << "Enter an number:  ";
    cin >> number;

   
    cout << "Initial value: " << number << endl;

   
    cout << "Postfix increment: " << number++ << endl;
    cout << "After postfix increment: " << number << endl;

   
    cout << "Prefix increment: " << ++number << endl;

    
    cout << "Postfix decrement: " << number-- << endl;
    cout << "After postfix decrement: " << number << endl;

   
    cout << "Prefix decrement: " << --number << endl;

    return 0;
}
