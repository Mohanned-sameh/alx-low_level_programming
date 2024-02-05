#include "search_algos.h"
/**
 * linear_skip - searches for a value in a sorted skip list of integers
 * @list: pointer to the head of the list to search in
 * @value: value to search for
 * Return: pointer to the first node where
 * value is located or NULL if value is not present
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current, *prev;

	if (list == NULL)
		return (NULL);

	current = list;
	while (current)
	{
		prev = current;
		if (current->express == NULL)
		{
			while (current->next)
				current = current->next;
			break;
		}
		current = current->express;
		printf("Value checked at index [%lu] = [%d]\n",
			   current->index, current->n);
		if (current->n >= value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
				   prev->index, current->index);
			break;
		}
	}
	if (current->express == NULL)
	{
		prev = current;
		while (current->next)
			current = current->next;
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
		   prev->index, current->index);
	while (prev)
	{
		printf("Value checked at index [%lu] = [%d]\n",
			   prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		if (prev->n > value)
			return (NULL);
		prev = prev->next;
	}
	return (NULL);
}
