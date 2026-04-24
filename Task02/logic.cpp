// Task 02 [The count of negative elements]
// Количество отрицательных элементов
// 
// Дан вектор целочисленных значений. Необходимо спроектировать 
// эффективный алгоритм и реализовать функцию, которая подсчитывает
// количество отрицательных элементов вектора.
//
// Если пользователь передаёт в функцию неверные данные, то функция
// должна возвратить -1.


#include <iostream>

int count_zero_elements(int array[], int size) {
	if (size <= 0) {
		return -1;
	}

	int negative_number_sum = 0;

	for (int i = 0; i < size; i++)
	{
		if (array[i] == 0) {
			negative_number_sum++;
		}
	}

	return negative_number_sum;
}