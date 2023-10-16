#include "main.h"
/**
 * _islower - entry point
 * @c: is the char to be checked
 * Return: 0 (failed) otherwise 1 if success
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
