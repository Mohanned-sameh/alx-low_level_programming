#include "search_algos.h"
/**
 * jump_list - searches for a value in a sorted list of integers
 * using the Jump search algorithm
 * @list: pointer to the head of the list to search in
 * @size: number of nodes in list
 * @value: value to search for
 * Return: pointer to the first node where value is located or NULL if value is not present
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump, i;
	listint_t *prev, *next;

	if (!list)
		return (NULL);
	jump = sqrt(size);
	for (i = 0, next = list; next->n < value; i += jump)
	{
		prev = next;
		while (i < size && i < (i + jump))
		{
			next = next->next;
			i++;
		}
		if (i < size)
			printf("Value checked at index [%lu] = [%d]\n", i, next->n);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", i - jump, i);
	for (; prev->index < i - jump; prev = prev->next)
		;
	printf("Value found between indexes [%lu] and [%lu]\n", prev->index, next->index);
	while (prev->index < size && prev->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		prev = prev->next;
	}
	if (prev->n == value)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		return (prev);
	}
	return (NULL);
}
