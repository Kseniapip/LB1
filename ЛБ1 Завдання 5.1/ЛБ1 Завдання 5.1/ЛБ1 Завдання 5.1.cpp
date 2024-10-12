/*Напишіть програму, яка приймає оцінку студента
(ціле число від 0 до 100) і виводить оцінку за шкалою:
«відмінно», «добре», «задовільно» або «незадовільно».*/

int main() {
    int grade;

   
    cout << "Enter student's grade (0 to 100): ";
    cin >> grade;


    if (grade < 0 || grade > 100) {
        cout << "Invalid grade! Please enter a number between 0 and 100." << endl;
    }
    else {
        
        if (grade >= 90) {
            cout << "Excellent" << endl; 
        }
        else if (grade >= 70 && grade >= 80) {
            cout << "Good" << endl;
        }
        else if (grade >= 60) {
            cout << "Satisfactory" << endl;
        }
        else {
            cout << "Unsatisfactory" << endl; 
        }
    }

    return 0;
}
