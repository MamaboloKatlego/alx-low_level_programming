#include "lists.h"

/**
 * free_dlistint - The short desc
 * @head: arg_1 desc
 * Desc: The long desc
 * return: The return desc
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	current = head;
	while (head)
	{
		head = head->next;
		free(current);
		current = head;
	}
}
