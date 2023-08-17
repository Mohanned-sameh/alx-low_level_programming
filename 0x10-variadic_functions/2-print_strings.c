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
	char *sep, *ptr;

	if (seperator == NULL || *seperator == 0)
		sep = "";
	else
		sep = (char *)seperator;

	va_start(ap, n);
	if (n > 0)
		printf("%s", va_arg(ap, char *));
	for (i = 1; i < n; i++)
	{
		ptr = va_arg(ap, char *);
		if (ptr == NULL)
			ptr = "(nil)";
		printf("%s%s", sep, ptr);
	}
	printf("\n");
	va_end(ap);
}
