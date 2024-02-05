#include "search_algos.h"
/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located or -1 if value is not present
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, min;

	if (!array)
		return (-1);
	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i *= 2;
	}
	min = i < size - 1 ? i : size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", i / 2, min);
	return (binary_search(array, min + 1, value));
}
