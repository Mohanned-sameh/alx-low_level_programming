#include <stdio.h>
/**
 * _isupper - checks for uppercase character
 * @c: the character to be checked
 * Return: 1 if c is uppercase else 0
 */
int _isupper(int c)
{
	if (c >= "A" && <= "Z")
		return (1);
	else
		return (0);
}
