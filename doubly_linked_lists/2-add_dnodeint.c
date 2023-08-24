#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to the head of the list
 * @n: data to be stored in the new node
 *
 * Return: address of the new node, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/* Create pointer to new node */
	dlistint_t *new_node;

	/* Allocate memory for new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{

		return (NULL);
	}

	/* Assign value to new node */
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;

	/* If head isn't empty, update prv ptr to new node */
	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}

	/* update head to point tonew node */
	*head = new_node;

	return (new_node);
}
