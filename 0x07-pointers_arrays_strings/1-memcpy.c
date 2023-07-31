#include "main.h"
#include <stdio.h>
/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: destination
 * @src: the char to be copied
 * @n: number of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r;

	for (r = 0; r < n; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
