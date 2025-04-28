#include <iostream>
#include <cctype>

using namespace std;

// Функция для ввода символа
char inputChar() {
    char ch;
    cout << "Введите символ: ";
    cin >> ch;
    return ch;
}

// Функция для вывода предыдущего символа в ASCII
void printPreviousChar(char ch) {
    char prevChar = ch - 1;
    cout << "Предыдущий символ: '" << prevChar << "' (ASCII код: " << static_cast<int>(prevChar) << ")\n";
}

// Функция для вывода следующего символа в ASCII
void printNextChar(char ch) {
    char nextChar = ch + 1;
    cout << "Следующий символ: '" << nextChar << "' (ASCII код: " << static_cast<int>(nextChar) << ")\n";
}

// Функция для отображения меню
void displayMenu() {
    cout << "\nМеню:\n";
    cout << "1. Ввести символ и показать предыдущий\n";
    cout << "2. Ввести символ и показать следующий\n";
    cout << "3. Выход\n";
    cout << "Выберите действие: ";
}

int main() {
    int choice;
    
    do {
        displayMenu();
        cin >> choice;
        
        switch(choice) {
            case 1: {
                char ch = inputChar();
                printPreviousChar(ch);
                break;
            }
            case 2: {
                char ch = inputChar();
                printNextChar(ch);
                break;
            }
            case 3:
                cout << "Выход из программы.\n";
                break;
            default:
                cout << "Неверный выбор. Попробуйте снова.\n";
        }
    } while(choice != 3);
    
    return 0;
}