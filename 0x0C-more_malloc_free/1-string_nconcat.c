#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - The returned pointer shall point to a newly allocated
 * space in memory ,which contains s1,
 * followed by the first n bytes of s2, and null terminated
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 * Return: pointer to the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i, j, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	if (j > n)
		j = n;
	p = malloc(sizeof(char) * (i + j + 1));
	if (p == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		p[k] = s1[k];
	for (l = 0; l < j; l++)
		p[k + l] = s2[l];
	p[k + l] = '\0';
	return (p);
	free(p);
	return (NULL);
}
