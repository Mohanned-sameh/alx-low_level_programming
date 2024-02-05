#include "search_algos.h"
/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located or -1 if value is not present
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, prev;

	if (!array)
		return (-1);
	jump = sqrt(size);
	for (i = 0; i < size; i += jump)
	{
		if (array[i] >= value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n", prev, i);
			for (prev = i - jump; prev < size && prev <= i; prev++)
			{
				printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
				if (array[prev] == value)
					return (prev);
			}
			return (-1);
		}
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", prev, i);
	for (prev = i - jump; prev < size; prev++)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}
	return (-1);
}
