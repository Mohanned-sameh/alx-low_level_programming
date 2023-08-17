#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints all arguments
 * @*: pointer to arguments
 * @format: format
 * Return: void
 */
void print_all(const char *const format, ...)
{
	va_list args;
	int i = 0, n = 0;
	char *separator = ", ";
	char *str;

	va_start(args, format);

	while (format && format[i])
		i++;

	while (format && format[n])
	{
		if (n == (i - 1))
		{
			separator = "";
		}
		switch (format[n])
		{
		case 'c':
			printf("%c%s", va_arg(args, int), separator);
			break;
		case 'i':
			printf("%d%s", va_arg(args, int), separator);
			break;
		case 'f':
			printf("%f%s", va_arg(args, double), separator);
			break;
		case 's':
			str = va_arg(args, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", str, separator);
			break;
		}
		n++;
	}
	printf("\n");
	va_end(args);
}
