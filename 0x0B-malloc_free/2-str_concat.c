#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings if NULL is passed,
 * treat as empty string
 * @s1: first string
 * @s2: second string
 * Return: pointer to the new string, NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, j, len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] || s2[i]; i++)
		len++;
	concat = malloc(sizeof(char) * len);
	if (concat == NULL)
		return (NULL);
	for (i = 0, j = 0; s1[i] || s2[i]; i++)
	{
		if (s1[i])
			concat[j++] = s1[i];
		if (s2[i])
			concat[j++] = s2[i];
		concat[j] = '\0';
		return (concat);
	}
}
