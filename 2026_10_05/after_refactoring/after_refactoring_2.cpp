#include <cmath>
#include <iostream>

int main() {
    int size = 10;
    double a[size];

    for (int i = 0; i < size; i++) {
        std::cout << "Введите " << i << "-й элемент: ";
        std::cin >> a[i];
    }

    bool flag = true;
    for (int i = 0; i < size - 1; i++) {
        if (a[i] > a[i + 1]) {
            flag = false;
            break;
        }
    }

    std::cout << (flag ? "последовательность возрастающая"
                       : "последовательность не возрастающая")
              << std::endl;

    return 0;
}
