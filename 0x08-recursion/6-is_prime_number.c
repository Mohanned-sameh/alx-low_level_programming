#include "main.h"
/**
 * is_prime - returns the 1 if n is prime
 * @a: input number
 * @b: iterator
 * Return: int
 */
int is_prime(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (is_prime(a, b + 1));
}
/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * other wise return 0
 * @n: input number
 * Return: int
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, 2));
}
