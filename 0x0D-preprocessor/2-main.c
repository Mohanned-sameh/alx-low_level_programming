#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints the file it was compiled from
 * @argc: argument count
 * @argv: argument vector
 *  Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	if (argc == 1)
		printf("%s\n", argv[0]);
	else
	{
		for (i = 1; i < argc; i++)
		{
			printf("%s\n", argv[i]);
			return (0);
		}
		return (0);
	}
	return (0);
}
