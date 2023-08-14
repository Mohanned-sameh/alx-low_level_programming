#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints the file it was compiled from
 * @argc: argument count
 * @argv: argument vector
 *  Return: 0
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
