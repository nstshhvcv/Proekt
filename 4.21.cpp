//Определить, является ли число a делителем числа b?
#include <iostream>

using namespace std;

int main() {
    int a, b;

    cout << "Введите число a: ";
    cin >> a;
    cout << "Введите число b: ";
    cin >> b;

    
    if (a == 0) {
        cout << "Ошибка: делитель не может быть равен нулю!" << endl;
        return 1;
    }

    
    if (b % a == 0) {
        cout << a << " является делителем " << b << endl;
    }
    else {
        cout << a << " НЕ является делителем " << b << endl;
    }

    return 0;
}
