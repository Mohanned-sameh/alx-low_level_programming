#include "main.h"
/**
 * _sqrt - returns the square root of a number
 * @a: number to be used
 * @b: test number
 * Return: the square root of a
 */
int _sqrt(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (_sqrt(a, b + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to be used
 * Return: the square root of n
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
