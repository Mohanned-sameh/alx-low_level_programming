#include "main.h"
/**
 * rev_string - print a string in reverse
 * followed by a new line to stdout
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0, i = 0;

	while (*(s + len) != '\0')
	{
		++len;
	}

	--len;
	while (len > i)
	{
		char c = *(s + i);

		*(s + i) = *(s + len);
		*(s + len) = c;
		--len;
		++i;
	}
}
