#include "lists.h"
/**
 * add_node - adds a node the beginning of the list
 * @head: the head of the list
 * @str: the string to be added
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *new;
    int i;
    char *s;

    new = malloc(sizeof(list_t));

    if (new == NULL)
        return (NULL);

    s = strdup(str);
    if (s == NULL)
    {
        free(new);
        return (NULL);
    }
    for (i = 0; str[i]; i++)
    {
        ;
    }
    new->str = s;
    new->len = i;
    new->next = *head;
    *head = new;
    return (new);
}