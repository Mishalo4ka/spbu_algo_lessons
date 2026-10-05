#include <cmath>
#include <iostream>

float average_array(float *arr, const int size);
void generate_array(float *arr, const int size);
void print_array(const char *const comment, float *arr, const int size);

int main() {
    int lenth = 10;
    float a[lenth], b[lenth], c[lenth];

    generate_array(a, lenth);
    generate_array(b, lenth);
    generate_array(c, lenth);

    print_array("Первая последовательность: ", a, lenth);
    std::cout << "Среднее первой последовательности: "
              << average_array(a, lenth) << std::endl
              << std::endl;

    print_array("Вторая последовательность: ", b, lenth);
    std::cout << "Среднее второй последовательности: "
              << average_array(b, lenth) << std::endl
              << std::endl;

    print_array("Третья последовательность: ", c, lenth);
    std::cout << "Среднее третей последовательности: "
              << average_array(c, lenth) << std::endl
              << std::endl;

    return 0;
}

float average_array(float *arr, const int size) {
    int s = 0;
    for (int i = 0; i < size; i++) {
        s += arr[i];
    }
    return s / size;
}

void generate_array(int *arr, const int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = std::rand() % 10;
    }
}

void print_array(const char *const comment, int *arr, const int size) {
    std::cout << comment << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << std::endl;
}
