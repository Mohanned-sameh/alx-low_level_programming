#include "main.h"

/**
 * _isdigit - tests if the number is a digit (from 0 to 9)
 * @c: the character to be checked
 * Return: 1 if it is else 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c < '10')
		return (1);
	else
		return (0);
}
