#include "sort.hpp"

#include <chrono>
#include <cstdlib>
#include <iostream>

#include "main.hpp"

int main() {

    biv::NamedSort funcs_arr[] = {
        {"bubble_sort_classic", biv::bubble_sort_classic},
        {"bubble_sort_no_swaped_opt", biv::bubble_sort_no_swaped_opt},
        {"bubble_sort_no_swaped_opt_mod", biv::bubble_sort_no_swaped_opt_mod},

        {"shaker_sort", biv::shaker_sort},
        {"shaker_sort_mod", biv::shaker_sort_mod},

        {"odd_even_sort", biv::odd_even_sort},

        {"comb_sort", biv::comb_sort},

        {"selection_sort", biv::selection_sort},

        {"insert_sort", biv::insert_sort},
        {"insert_sort_binary_search", biv::insert_sort_binary_search},

        {"shell_sort", biv::shell_sort},
    };

    int size;
    std::cin >> size;

    int arr_to_check[size];
    biv::generate_array(arr_to_check, size);

    int func_count = sizeof(funcs_arr) / sizeof(funcs_arr[0]);
    for (int i = 0; i < func_count; i++) {
        double func_time =
            biv::check_sort(funcs_arr[i].func, arr_to_check, size);
        std::cout << funcs_arr[i].name << ": " << func_time << " s"
                  << std::endl;
    }

    return 0;
}

double biv::check_sort(void (*sort_func)(int *arr, const int size), int *arr,
                       const int size) {
    int arr_copy[size];
    for (int i = 0; i < size; i++) {
        arr_copy[i] = arr[i];
    }

    auto start = std::chrono::steady_clock::now();
    sort_func(arr_copy, size);
    auto end = std::chrono::steady_clock::now();

    double duration = std::chrono::duration<double>(end - start).count();
    return duration;
}

void biv::generate_array(int *arr, const int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = std::rand() % 200000;
    }
}