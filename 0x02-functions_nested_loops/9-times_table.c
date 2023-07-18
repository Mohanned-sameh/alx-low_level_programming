#include "main.h"
/**
 * times_table - entry point
*/
void times_table(void)
{
	int i, j, k;

	for (j = 0; j < 10; j++)
	{
		k = j * i;

		if (j == 0)
		{
			_putchar(k + '0');
		}
		if (k < 10 && j != 0)
		{
			_putchar('.');
			_putchar(' ');
			_putchar(' ');
			_putchar(k + '0');
		}
	}
	_putchar('\n');
}
