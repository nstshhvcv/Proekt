//Дана масса в килограммах. Найти число полных тонн в ней.
#include <iostream>

int main() {
    double kilograms;

    std::cout << "Введите массу в килограммах: ";
    std::cin >> kilograms;

    
    int tons = static_cast<int>(kilograms / 1000);

    std::cout << "Число полных тонн: " << tons << std::endl;

    return 0;
}
