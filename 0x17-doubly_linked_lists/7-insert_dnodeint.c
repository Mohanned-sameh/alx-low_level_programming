#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *aux_node = *h;
	unsigned int index, count = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->prev = NULL;
		new->next = *h;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
		return (*h);
	}
	index = idx - 1;
	while (aux_node && count != index)
	{
		count++;
		aux_node = aux_node->next;
	}
	if (count == index && aux_node)
	{
		new->prev = aux_node;
		new->next = aux_node->next;
		if (aux_node->next)
			aux_node->next->prev = new;
		aux_node->next = new;
		return (new);
	}
	free(new);
	return (NULL);
}
