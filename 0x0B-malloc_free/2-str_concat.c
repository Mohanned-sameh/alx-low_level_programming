#include <stdio.h>
#include "main.h"
#include <stdlib.h>

char *_strcat(char *dest, char *src, int n);
int _strlen(char *s);

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
	int size1, size2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	size1 = _strlen(s1);
	size2 = _strlen(s2);

	concat = malloc(((size1 + size2) + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);

	_strcat(concat, s1, size1);
	_strcat(concat, s2, size2);
	concat += '\0';
	return (concat);
}

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
		;
	return (a);
}
/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: int type for the length of the string
 * Return: dest
 */
char *_strcat(char *dest, char *src, int n)
{
	int dest_len, i;

	dest_len = _strlen(dest);
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	return (dest);
}
