//Дано трехзначное число. Найти число, полученное при перестановке первой и второй цифр заданного числа.
#include <iostream>

int main() {
    int number;

    std::cout << "Введите трехзначное число: ";
    std::cin >> number;

   
    if (number < 100 || number > 999) {
        std::cout << "Ошибка! Число должно быть трехзначным." << std::endl;
        return 1;
    }

    
    int firstDigit = number / 100;       
    int secondDigit = (number / 10) % 10; 
    int thirdDigit = number % 10;        

    
    int newNumber = secondDigit * 100 + firstDigit * 10 + thirdDigit;

    std::cout << "Число после перестановки: " << newNumber << std::endl;

    return 0;
}
