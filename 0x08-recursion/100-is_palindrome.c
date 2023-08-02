#include "main.h"
/**
 * palind3 - obtains length of a
 * @s: string
 * @i: iterator
 * Return: On success 1.
 */
int palind3(char *s, int i)
{
	if (*s != *(s + i))
		return (0);
	else if (*s == 0)
		return (1);
	return (palind3(s + 1, i - 2));
}
/**
 * palind2 - checks if a string is a palindrome
 * @s: string to check
 * @i: iterator
 * Return: 1 if palindrome, 0 if not
 */
int palind2(char *s, int i)
{
	if (*s == 0)
		return (1 - i);
	return (palind2(s, i + 1));
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	return (palind2(s, 1));
}
