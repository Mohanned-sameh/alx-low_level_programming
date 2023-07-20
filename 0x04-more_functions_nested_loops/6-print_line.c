#include "main.h"
/**
 * print_line - a function that prints a straight line
 * @n: the number of times to print _
 */
void print_line(int n)
{
	if (n > 0)
		_putchar('_');
		_putchar('\n');
	else if (n <= 0)
		_putchar('\n');
}
