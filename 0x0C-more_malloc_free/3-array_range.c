#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *ar;
	int i, j = 0;

	if (min > max)
		return (NULL);
	j = max - min + 1;
	ar = malloc(sizeof(int) * j);
	if (ar == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		ar[i] = min++;

	return (ar);
}
