#include "main.h"
/**
 * _puts - prints a string followed by a new line to stdout
 * @*str: the string to be printed
 * Return: void
 */
void _puts(char *s)
{
	int len = 0;

	while (*(str + len) != '\0')
	{
		_putchar(*(str + len));
		++len
	}
	_putchar('\n');
}
