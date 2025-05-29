//Даны основания и высота равнобедренной трапеции. Найти периметр трапеции.
#include <iostream>
#include <cmath> 

int main() {
    double a, b, h; // a - нижнее основание, b - верхнее основание, h - высота

    std::cout << "Введите длину нижнего основания трапеции (a): ";
    std::cin >> a;

    std::cout << "Введите длину верхнего основания трапеции (b): ";
    std::cin >> b;

    std::cout << "Введите высоту трапеции (h): ";
    std::cin >> h;

    
    double side = sqrt(pow((a - b) / 2, 2) + pow(h, 2));

    
    double perimeter = a + b + 2 * side;

    std::cout << "Периметр трапеции: " << perimeter << std::endl;

    return 0;
}
