#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to be used
 * Return: the square root of n
 */
int _sqrt(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (_sqrt(a, b + 1));
}
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
