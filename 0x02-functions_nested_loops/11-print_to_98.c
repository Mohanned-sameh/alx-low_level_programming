#include <stdio.h>
/**
 * print_to_98 - entry point to print to 98
 * @n: starting point
 */
void print_to_98(int n)
{
		if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
