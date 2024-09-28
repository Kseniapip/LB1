/*Завдання 3. Напишіть програму, яка приймає ціле число та виводить
це число до та після його інкрементації та
декрементації (використовуйте як префіксну, так і постфіксну форми)*/

#include <iostream>
using namespace std;

int main() {
    int number;


    cout << "Enter an number:  ";
    cin >> number;

    // Початкове значення числа
    cout << "Initial value: " << number << endl;

    // Постфіксна інкрементація (спочатку використовуємо значення, потім збільшуємо)
    cout << "Postfix increment: " << number++ << endl;
    cout << "After postfix increment: " << number << endl;

    // Префіксна інкрементація (спочатку збільшуємо, потім використовуємо значення)
    cout << "Prefix increment: " << ++number << endl;

    // Постфіксна декрементація (спочатку використовуємо значення, потім зменшуємо)
    cout << "Postfix decrement: " << number-- << endl;
    cout << "After postfix decrement: " << number << endl;

    // Префіксна декрементація (спочатку зменшуємо, потім використовуємо значення)
    cout << "Prefix decrement: " << --number << endl;

    return 0;
}