#include "sort.hpp"

#include <cstdlib>
#include <iostream>

#include "main.hpp"

int main() {
    int size;
    std::cin >> size;

    int arr_to_check[size];
    biv::generate_array(arr_to_check, size);

    biv::bubble_sort_classic(arr_to_check, size);

    for (int i = 0; i < size; i++) {
        std::cout << arr_to_check[i] << ' ';
    }

    return 0;
}

double biv::check_sort(void (*sort_func)(int *arr, const int size), int *arr,
                       const int size) {
    int arr_copy[size];
    for (int i = 0; i < size; i++) {
        arr_copy[i] = arr[i];
    }

    sort_func(arr_copy, size);

    return 1;
}

void biv::generate_array(int *arr, const int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = std::rand() % 200000;
    }
}