/*Напишіть програму, яка приймає оцінку студента
(ціле число від 0 до 100) і виводить оцінку за шкалою:
«відмінно», «добре», «задовільно» або «незадовільно».*/

int main() {
    int grade;

    // Введення оцінки студента
    cout << "Enter student's grade (0 to 100): ";
    cin >> grade;

    // Перевірка, чи оцінка в межах від 0 до 100
    if (grade < 0 || grade > 100) {
        cout << "Invalid grade! Please enter a number between 0 and 100." << endl;
    }
    else {
        // Оцінювання за шкалою
        if (grade >= 90) {
            cout << "Excellent" << endl; // Відмінно
        }
        else if (grade >= 70 && grade >= 80) {
            cout << "Good" << endl; // Добре
        }
        else if (grade >= 60) {
            cout << "Satisfactory" << endl; // Задовільно
        }
        else {
            cout << "Unsatisfactory" << endl; // Незадовільно
        }
    }

    return 0;
}