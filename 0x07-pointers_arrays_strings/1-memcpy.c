#include "main.h"
/**
 * _memcpy - copies n bytes to dest
 * @dest: the char to be copied to
 * @src: the char to be copied from
 * @n: the number of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
