#include "sort.hpp"
#include <iostream>

#include "main.hpp"

int main() {
    int arr[] = {9, 8, 1, 1, 5, 5, 7};

    biv::bubble_sort_classic(arr, 7);

    for (int i = 0; i < 7; i++) {
        std::cout << arr[i] << ' ';
    }

    return 0;
}