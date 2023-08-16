#include "3-calc.h"
/**
 * op_add - adds two numbers
 * @a: first number
 * @b: second number
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	int result;

	return (result = a + b);
}
/**
 * op_sub - subtracts two numbers
 * @a: first number
 * @b: second number
 * Return: subtracted number
 */
int op_sub(int a, int b)
{
	int result;

	return (result = a - b);
}
/**
 * op_mul - multiplies two numbers
 * @a: first number
 * @b: second number
 * Return: multiplied number
 */
int op_mul(int a, int b)
{
	int result;

	return (result = a * b);
}
/**
 * op_div - divides two numbers
 * @a: first number
 * @b: second number
 * Return: divided number
 */
int op_div(int a, int b)
{
	int result;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (result = a / b);
}
/**
 * op_mod - modulus two numbers
 * @a: first number
 * @b: second number
 * Return: modulus number
 */
int op_mod(int a, int b)
{
	int result;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (result = a % b);
}
