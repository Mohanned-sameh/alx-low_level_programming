#include "main.h"
/**
 * print_line - a function that prints a straight line
 * @n: the number of times to print _
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');

	_putchar('\n');
}
