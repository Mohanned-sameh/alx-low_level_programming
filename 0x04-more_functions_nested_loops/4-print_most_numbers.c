#include "main.h"
/**
 * print_most_numbers - a function that prints 0 - 9 with a new line
 */
void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c != '2' && c != '4')
			_printchar(c);
	}
	_printchar('\n');
}
