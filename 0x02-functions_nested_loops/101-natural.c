#include <stdio.h>
/**
* main - entry point
* Return: 0
*/
int main(void)
{
int i, j;

// Write a program that computes and prints the sum of all the multiples of 3 or 5 below 1024 (excluded), followed by a new line?
for (i = 0; i < 1024; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
j += i;
printf("%d", j);
printf("\n");
}
}
return (0);
}
