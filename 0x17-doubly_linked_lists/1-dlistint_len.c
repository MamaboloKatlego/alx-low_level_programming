#include "lists.h"

/**
 * dlistint_len - The short description
 * @h: The double linked list pointer
 * Description: The long Description
 * return: The return desc
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *current;
	size_t count;

	current = (dlistint_t *) h;
	count = 0;
	while (current)
	{
		count++;
		current = current->next;
	}
	return (count);
}
