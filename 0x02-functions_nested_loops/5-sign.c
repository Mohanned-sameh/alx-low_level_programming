#include "main.h"
/**
* print_sign - entry point
* @n: the number to be checked
* Return: 0 if num is equal to 0
* || 1 if num greater than 0
* || -1 if number smaller than 0
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
	return (-1);
}
