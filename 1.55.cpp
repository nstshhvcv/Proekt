#include <iostream>

int main() {
    double v1, v2, s; 

    std::cout << "Введите скорость первого автомобиля (км/ч): ";
    std::cin >> v1;

    std::cout << "Введите скорость второго автомобиля (км/ч): ";
    std::cin >> v2;

    std::cout << "Введите начальное расстояние между автомобилями (км): ";
    std::cin >> s;

    
    double time = s / (v1 + v2);

    std::cout << "Автомобили встретятся через " << time << " часа(ов)" << std::endl;

    return 0;
}