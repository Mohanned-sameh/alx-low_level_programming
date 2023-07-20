#include "main.h"
/**
 * print_numbers - prints from 0 - 9
 * Return: 0 success
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
