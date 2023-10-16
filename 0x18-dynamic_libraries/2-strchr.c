#include "main.h"
/**
 * _strchr - returns a pointer if c exists
 * @s: the char to be returned
 * @c: the char to be checked
 * Return: s
 */
char *_strchr(char *s, char c)
{
int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
