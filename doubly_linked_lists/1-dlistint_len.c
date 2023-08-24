#include "lists.h"
/**
 * dlistint_len - returns the number of elements in the list
 * @h: head of the list
 * Return: return the Numberof elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
