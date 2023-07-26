#include "main.h"
/**
 * swap_int - swaps two integers with each other
 * @*a: 1st int number
 * @*b: 2nd int number
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
