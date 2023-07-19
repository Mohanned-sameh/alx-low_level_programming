#include "main.h"
/**
 * times_table - entry point
*/
void times_table(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		_putchar(0);

		for (j = 0; j < 10; j++)
		{
			_putchar(',');
			_putchar(' ');

			k = i * j;

			if (k <= 10)
				_putchar(' ');
			else
				_putchar((k / 10) + '0');

			_putchar((k % 10) + '0');
		}
	_putchar('\n');
	}
}
