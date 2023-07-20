#include <stdio.h>
/**
 * main - prints fizz if number mulitplied by 3s, buzz if multipled by 5s
 * fizzbuzz if number multiplied by 3s && 5s
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf(" %d", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
