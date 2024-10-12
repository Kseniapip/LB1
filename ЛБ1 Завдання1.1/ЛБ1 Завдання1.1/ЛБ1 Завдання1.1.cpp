/*Завдання 1: Напишіть програму, яка обчислює площу
та периметр прямокутника. Користувач вводить довжину та ширину
(у вигляді цілого числа). Програма повинна вивести площу та периметр.
Отримавши ці два значення, приведіть їх до дійсного (дробового) числа,
після чого виведіть їх суму, різницю, добуток і частку.
Виведіть всі адреса змінних, які ви створили, у памʼяті.*/



#include <iostream>
using namespace std;

int main() {

    int length, width;
    cout << "Rectangle length: "; 
    cin >> length; 
    cout << "Rectangle width: "; 
    cin >> width; 


    int area = length * width; 
    int perimeter = 2 * (length + width); 


    float area_float = area;
    float perimeter_float = perimeter;

    
    float sum = area_float + perimeter_float;
    float difference = area_float - perimeter_float;
    float product = area_float * perimeter_float;
    float division = area_float / perimeter_float;


    cout << "Area: " << area << endl; 
    cout << "Perimeter: " << perimeter << endl; 
    cout << "Sum: " << sum << endl; 
    cout << "Difference: " << difference << endl; 
    cout << "Product: " << product << endl; 
    cout << "Division: " << division << endl; 

   
    cout << "Address length: " << &length << endl;
    cout << "Address width: " << &width << endl;
    cout << "Address area: " << &area << endl;
    cout << "Address perimeter: " << &perimeter << endl;

    return 0;
}
