#include "main.h"

/**
 * print_triangle - prints triangle with #
 * size: the size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (size <= '0')
			_putchar('\n');
		else
			_putchar('#');
	}
	_putchar('\n');
}
