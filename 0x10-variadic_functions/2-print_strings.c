#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings
 * @seperator: seperator
 * @n: number of strings
 * Return: void
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		printf("%s", str);
		if (i < n - 1 && seperator != NULL)
			printf("%s", seperator);
		else
			printf("\n");
	}
	va_end(ap);
}
