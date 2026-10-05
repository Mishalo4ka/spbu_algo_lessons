#include <cmath>
#include <iostream>

int main() {
    double angle;
    std::cout << "Введите угол: " << std::endl;
    std::cin >> angle;

    double cos_2a = std::cos(2 * angle);
    double sin_2a = std::sin(2 * angle);
    if (cos_2a != 1) {
        double f1_result = (1 + sin_2a) / (1 - cos_2a);
        std::cout << "F(x1)=" << f1_result << std::endl;
    } else {
        std::cout << "Неверный ввод для F1(angle) " << std::endl;
    }

    double tan_a = std::tan(angle);
    if (tan_a != 1) {
        double f2_result = (1 + tan_a * tan_a) / (1 - tan_a * tan_a);
        std::cout << "F(X2)=" << f2_result << std::endl;
    } else {
        std::cout << "Неверный ввод для F2(angle) " << std::endl;
    }

    return 0;
}