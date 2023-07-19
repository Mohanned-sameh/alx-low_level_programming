#include "main.h"
/**
 * print_to_98 - entry point to print to 98
 * @n: starting point
 */
void print_to_98(int n)
{
	while (n <= 98)
		_putchar(n);
	_putchar(',');
	_putchar(' ');
}
