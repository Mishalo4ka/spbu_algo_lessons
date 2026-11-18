#include "sort.hpp"

void biv::bubble_sort_classic(int *arr, const int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
}

void biv::bubble_sort_no_swaped_opt(int *arr, const int size) {
    bool is_swapped = false;

    int i = 0;
    do {
        is_swapped = false;

        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;

                is_swapped = true;
            }
        }
        i++;
    } while (is_swapped);
}

void biv::bubble_sort_no_swaped_opt_mod(int *arr, const int size) {
    int end = size - 1;
    bool is_swapped = true;

    do {
        is_swapped = false;
        int last_swap = 0;

        for (int j = 0; j < end; j++) {
            if (arr[j] > arr[j + 1]) {
                int t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;

                last_swap = j;
                is_swapped = true;
            }
        }
        end = last_swap;
    } while (is_swapped);
}

void biv::shaker_sort(int *arr, const int size) {
    int begin = 0;
    int end = size - 1;
    bool is_swapped = true;

    while (is_swapped) {
        is_swapped = false;

        for (int i = begin; i < end; i++) {
            if (arr[i] > arr[i + 1]) {
                int t = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = t;

                is_swapped = true;
            }
        }
        end--;

        if (!is_swapped) {
            break;
        }

        for (int i = end; i > begin; i--) {
            if (arr[i - 1] > arr[i]) {
                int t = arr[i - 1];
                arr[i - 1] = arr[i];
                arr[i] = t;

                is_swapped = true;
            }
        }
        begin++;
    }
}

void biv::shaker_sort_mod(int *arr, const int size) {
    int begin = 0;
    int end = size - 1;
    bool is_swapped = true;

    while (is_swapped) {
        is_swapped = false;

        int last_swap = 0;
        for (int i = begin; i < end; i++) {
            if (arr[i] > arr[i + 1]) {
                int t = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = t;

                last_swap = i;
                is_swapped = true;
            }
        }
        end = last_swap;

        if (!is_swapped) {
            break;
        }

        for (int i = end; i > begin; i--) {
            if (arr[i - 1] > arr[i]) {
                int t = arr[i - 1];
                arr[i - 1] = arr[i];
                arr[i] = t;

                is_swapped = true;
            }
        }
        begin++;
    }
}

void biv::odd_even_sort(int *arr, const int size) {
    bool is_swapped = true;

    do {
        is_swapped = false;

        for (int i = 0; i < size - 1; i += 2) {
            if (arr[i] > arr[i + 1]) {
                int t = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = t;

                is_swapped = true;
            }
        }

        for (int i = 1; i < size - 1; i += 2) {
            if (arr[i] > arr[i + 1]) {
                int t = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = t;

                is_swapped = true;
            }
        }
    } while (is_swapped);
}

void biv::comb_sort(int *arr, const int size) {
    double factor = 1.25;
    int step = size - 1;

    bool needs_another_pass = true;

    if (size < 2) {
        return;
    }

    while (step > 1 || needs_another_pass) {
        needs_another_pass = false;
        for (int i = 0; i + step < size; i++) {
            if (arr[i] > arr[i + step]) {
                int t = arr[i];
                arr[i] = arr[i + step];
                arr[i + step] = t;

                needs_another_pass = true;
            }
        }

        if (step > 1) {
            step /= factor;
            needs_another_pass = true;
        }
    }
}

void biv::selection_sort(int *arr, const int size) {
    for (int i = 0; i < size - 1; i++) {
        int min = i;

        for (int j = i + 1; j < size; j++) {
            if (arr[min] > arr[j]) {
                min = j;
            }
        }

        if (min != i) {
            int t = arr[i];
            arr[i] = arr[min];
            arr[min] = t;
        }
    }
}

void biv::insert_sort(int *arr, const int size) {
    for (int i = 1; i < size; i++) {
        int j = i;
        int x = arr[j];

        while (j > 0 && x < arr[j - 1]) {
            arr[j] = arr[j - 1];
            j--;
        }
        arr[j] = x;
    }
}

void biv::insert_sort_binary_search(int *arr, const int size) {
    for (int i = 1; i < size; i++) {
        int x = arr[i];

        int begin = 0;
        int end = i - 1;

        while (begin < end) {
            int middle = (begin + end) / 2;

            if (arr[middle] > x) {
                end = middle;
            } else {
                begin = middle + 1;
            }
        }

        if (x < arr[begin]) {
            for (int j = i; j > begin; j--) {
                arr[j] = arr[j - 1];
            }
            arr[begin] = x;
        }
    }
}

void biv::shell_sort(int *arr, const int size) {
    int step = size / 2;
    while (step > 0) {
        for (int i = step; i < size; i++) {
            int j = i;
            int x = arr[j];
            while (j >= step && x < arr[j - step]) {
                arr[j] = arr[j - step];
                j -= step;
            }
            arr[j] = x;
        }
        step /= 2;
    }
}