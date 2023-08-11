#include "main.h"
#include <stdlib.h>
#include <stdio.h>

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
	ar = malloc(sizeof(*ar) * ((max - min) + 1));
	if (ar != NULL)
	{
		for (i = min; i <= max; i++)
		{
			ar[j] = i;
			j++;
		}
		return (ar);
	}
	else
		return (NULL);
}
