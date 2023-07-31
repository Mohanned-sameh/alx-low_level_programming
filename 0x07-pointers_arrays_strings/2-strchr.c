#include "main.h"
/**
 * _strchr - returns a pointer if c exists
 * @s: the char to be returned
 * @c: the char to be checked
 * Return: s
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i < s; i++)
	{
		if (s != '\0')
		{
			s[i] = c;
			return (s);
		}
		else
			return (NULL);
	}
}
