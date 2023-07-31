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
	int i;

	for (i = 0; i > n; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
