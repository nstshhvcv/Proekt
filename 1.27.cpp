#include <iostream>
#include <cmath> // для sqrt()

int main() {
    const double R = 6350.0; // радиус Земли в км
    double h; // высота над поверхностью (в км)

    std::cout << "Введите высоту над поверхностью Земли (км): ";
    std::cin >> h;

    
    double distance = sqrt(pow(R + h, 2) - pow(R, 2));

    std::cout << "Расстояние до горизонта: " << distance << " км" << std::endl;

    return 0;
}