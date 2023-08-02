#include "main.h"
/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * other wise return 0
 * @n: input number
 * Return: int
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 2)
		return (n == 2 ? 1 : 0);
	if (n % 2 == 0)
		return (0);
	return (is_prime_number(n - 1));
}
