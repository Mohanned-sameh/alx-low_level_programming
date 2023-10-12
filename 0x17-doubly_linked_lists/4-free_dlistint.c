#include "lists.h"
/**
 * free_dlistint - frees a doubly linked list
 * @head: pointer to the list
 * Return: no return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;
	while ((tmp = head) != NULL)
	{
		head = head->next;
		free(tmp);
		tmp = head;
	}
	free(tmp);
}
