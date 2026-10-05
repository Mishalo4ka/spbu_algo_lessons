#include <cmath>
#include <iostream>

int main() {
    int d, m, g;

    std::cout << "ВВедите дату дня:" << std::endl;
    std::cin >> d;
    std::cout << "Введите число месяца:" << std::endl;
    std::cin >> m;
    std::cout << "Введите год:" << std::endl;
    std::cin >> g;

    int y = g % 100;
    int c = g / 100;

    int s = (d + ((13 * m - 1) / 5) + (y / 4) + (c / 4) - 2 * c + 777) % 7;

    switch (s) {
    case 0:
        std::cout << "Воскресенье" << std::endl;
        break;
    case 1:
        std::cout << "Понедельник" << std::endl;
        break;
    case 2:
        std::cout << "Вторник" << std::endl;
        break;
    case 3:
        std::cout << "Среда" << std::endl;
        break;
    case 4:
        std::cout << "Четверг" << std::endl;
        break;
    case 5:
        std::cout << "Пятница" << std::endl;
        break;
    case 6:
        std::cout << "Суббота" << std::endl;
        break;
    }

    return 0;
}
