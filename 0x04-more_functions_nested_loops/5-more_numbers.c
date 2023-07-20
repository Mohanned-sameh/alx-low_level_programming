#include "main.h"
/**
 * more_numbers - prints from 0 to 14
 */
void more_numbers(void)
{
	char i;
	int c;

	for (c = 0; c <= 10; c++)
	{
		for (i = '0'; i <= 14; i++)
			putchar(i);
		putchar('\n');
	}
	putchar('\n');
}
