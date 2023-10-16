#include "main.h"
/**
 * _strpbrk - locates the first occurence in the string s
 * @s: the string s to be located
 * @accept: the char to be checked
 * Return: pointer of s in bytes
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
