#pragma once

namespace biv {
void bubble_sort_classic(int *arr, const int size);
void bubble_sort_no_swaped_opt(int *arr, const int size);
void bubble_sort_no_swaped_opt_mod(int *arr, const int size);

void shaker_sort(int *arr, const int size);
void shaker_sort_mod(int *arr, const int size);

void odd_even_sort(int *arr, const int size);

void comb_sort(int *arr, const int size);

void selection_sort(int *arr, const int size);

void insert_sort(int *arr, const int size);
void insert_sort_binary_search(int *arr, const int size);
} // namespace biv
