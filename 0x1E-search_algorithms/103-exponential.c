#include "search_algos.h"
/**
 * _binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @left: left bound of the array
 * @right: right bound of the array
 * @value: value to search for
 * Return: first index where value is located or -1 if value is not present
 */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	if (left <= right)
	{
		mid = left + (right - left) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			return (_binary_search(array, left, mid - 1, value));
		return (_binary_search(array, mid + 1, right, value));
	}
	return (-1);
}
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
	size_t bound = 1, min;

	if (array == NULL || size == 0)
		return (-1);
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}
	min = (bound < size - 1) ? bound : size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, min);
	return (_binary_search(array, bound / 2, min, value));
}
