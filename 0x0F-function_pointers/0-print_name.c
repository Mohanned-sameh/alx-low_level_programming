#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - prints a name
 * @name: name to print
 * @f: function to print with
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
    if (name != NULL && f != NULL)
    {
        f(name);
        return;
        printf("\n");
    }
    else
    {
        return;
    }
}
