#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at an index
 * @head: head of list
 * @index: node to be deleted
 * Return: 1 or -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	/* Start at the beginning*/
	dlistint_t *current = *head;
	unsigned int x;

	if (*head == NULL)
		return (-1); /* Failed because list is empty */
	if (index == 0)
	{
		*head = current->next; /* update head to next node */
		if (current->next != NULL) /* If there is no next */
			current->next->prev = NULL;
		free(current);
		return (1);
	}

	for (x = 0; x < index; x++)
	{
		if (current == NULL)
			return (-1); /* failed because index is out of range */
		current = current->next;
	}
	if (current->prev != NULL)
		current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;

	free(current);

	return (1);
}
