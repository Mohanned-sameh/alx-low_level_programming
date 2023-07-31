#include "main.h"
/**
 * _memset - fills the first n bytes of the memory area
 * pointed to by s with the constant byte b.
 * @s: char value
 * @b: constant byte char value
 * @n: integer number of bytes
 * Return: pointer of s
 */
char *_memset(char *s, char b, unsigned int n)
{
for (i = 0; n > 0; i++)
{
s[i] = b
n--;
}
return (s);
}
