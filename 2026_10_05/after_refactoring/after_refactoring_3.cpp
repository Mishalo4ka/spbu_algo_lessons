#include <cmath>
#include <iostream>

void print_array(int *arr, const int size);

int main() {
    int size = 20;
    int a[size];

    for (int i = 0; i < size; i++) {
        a[i] = std::rand() % 20;
    }
    print_array(a, size);

    for (int i = 0; i < size / 2; i++) {
        int temp = a[i];
        a[i] = a[size - 1 - i];
        a[size - 1 - i] = temp;
    }
    print_array(a, size);

    return 0;
}

void print_array(int *arr, const int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}
