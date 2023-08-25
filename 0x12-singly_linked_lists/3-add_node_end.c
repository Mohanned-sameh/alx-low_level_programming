#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to the first element of the list.
 * @str: string to set in the new node.
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new_node;
    list_t *temp = *head;
    int length = 0;

    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return (NULL);
    while (str[length])
        length++;
    new_node->str = strdup(str);
    new_node->len = length;
    new_node->next = NULL;
    if (*head == NULL)
    {
        *head = new_node;
        return (new_node);
    }
    while (temp->next)
        temp = temp->next;
    temp->next = new_node;
    return (new_node);
}