#include <iostream>

void my_sort(int *arr, const int size);
void print_array(const char *const comment, int *arr, const int size);

// TODO Интерфейс пользователя должен быть на русском языке
int main()
{
	int size;

	std::cout << "Введите размер массива: ";
	std::cin >> size;

	int *arr = new int[size];

	std::cout << "Введите элементы массива: ";
	for (int i = 0; i < size; i++)
	{
		std::cin >> *(arr + i);
	}

	print_array("Неотсортированный массив: ", arr, size);

	my_sort(arr, size);

	print_array("Отсортированный массив: ", arr, size);

	return 0;

	std::cout << std::endl;
	return 0;
}

void my_sort(int *arr, const int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{

			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void print_array(const char *const comment, int *arr, const int size)
{
	std::cout << comment << std::endl;
	for (int i = 0; i < size; i++)
	{
		std::cout << *(arr + i) << " ";
	}
	std::cout << std::endl;
}
