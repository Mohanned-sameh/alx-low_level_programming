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
	skiplist_t *prev, *next;

	if (!list)
		return (NULL);
	for (prev = list; prev; prev = next)
	{
		next = prev->express;
		printf("Value checked at index [%lu] = [%d]\n", next->index, next->n);
		if (!next || next->n >= value)
		{
			if (!next)
			{
				next = prev;
				while (next->next)
					next = next->next;
			}
			printf("Value found between indexes [%lu] and [%lu]\n",
				   prev->index, next->index);
			while (prev->index <= next->index)
			{
				printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
				if (prev->n == value)
					return (prev);
				prev = prev->next;
			}
			break;
		}
	}
	return (NULL);
}
