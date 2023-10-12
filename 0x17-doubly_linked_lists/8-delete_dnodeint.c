#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: pointer to the head of the list
 * @index: index of the node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = *head;
	dlistint_t *node_to_delete = *head;
	unsigned int i, count = 0;

	if (!(*head))
		return (-1);
	if (index == 0)
	{
		*head = node_to_delete->next;
		free(node_to_delete);
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}
	i = index - 1;
	while (node && count != i)
	{
		count++;
		node = node->next;
	}
	if (count == i && node)
	{
		node_to_delete = node->next;
		if (node_to_delete->next)
			node_to_delete->next->prev = node;
		node->next = node_to_delete->next;
		free(node_to_delete);
		return (1);
	}
	return (-1);
}
