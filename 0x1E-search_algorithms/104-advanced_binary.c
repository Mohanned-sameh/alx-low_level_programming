#include "search_algos.h"
/**
 * advanced_binary - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located or -1 if value is not present
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t i, mid = (size - 1) / 2;

	if (!array)
		return (-1);
	if (size == 1)
		return (array[0] == value ? 0 : -1);
	printf("Searching in array: ");
	for (i = 0; i < size; i++)
		printf("%d%s", array[i], i == size - 1 ? "\n" : ", ");
	if (array[mid] == value)
	{
		if (array[mid - 1] < value)
			return (mid);
	}
	if (array[mid] < value)
	{
		mid++;
		array += mid;
		size -= mid;
		if (size)
			return (mid + advanced_binary(array, size, value));
	}
	return (advanced_binary(array, mid, value));
}
