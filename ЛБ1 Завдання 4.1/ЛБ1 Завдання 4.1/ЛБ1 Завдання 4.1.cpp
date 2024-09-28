/*Завдання 4. Напишіть програму, яка приймає від користувача вік і зарплату,
потім виводить «We will consider your position», якщо вік більше 20 і зарплата більше 400 але менша 1000,
інакше виводить «You are not suitable». Якщо значення true, програма повинна запитати ваше ім'я, прізвище, бажану посаду
і вивести всі ці дані разом з віком і зарплатою, на яку ви претендуєте.*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    int age;
    double salary;
    string firstName, lastName, desiredPosition; //  ім'я, прізвище, бажана посада


    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your desired salary: "; // бажана посада
    cin >> salary;

    // Перевірка умов для розгляду позиції
    if (age > 20 && salary > 400 && salary < 1000) {
        cout << "We will consider your position." << endl;

        // Запитуємо ім'я, прізвище та бажану посаду
        cout << "Enter your first name: ";
        cin >> firstName;
        cout << "Enter your last name: ";
        cin >> lastName;
        cout << "Enter your desired position: ";
        cin >> desiredPosition;


        cout << "\nYour details:" << endl;
        cout << "Name: " << firstName << " " << lastName << endl;
        cout << "Age: " << age << endl;
        cout << "Desired Salary: $" << salary << endl;
        cout << "Desired Position: " << desiredPosition << endl;
    }
    else {
        cout << "You are not suitable." << endl;
    }

    return 0;
}