#include "lists.h"

/**
 * get_dnodeint_at_index - The short desc
 * @head: arg_1 desc
 * @index: arg_2 desc
 * Desc: The long desc
 * Return: The return desc
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int current_index = 0;
	dlistint_t *current;

	if (head == NULL)
		return (NULL);
	current = head;
	while (current)
	{
		if (current_index == index)
			return (current);
		current_index++;
		current = current->next;
	}
	return (NULL);
}
