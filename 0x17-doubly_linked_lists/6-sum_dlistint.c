#include "lists.h"

/**
 * sum_dlistint - The short desc
 * @head: arg_1 desc
 * Description: The long desc
 * Return: The return desc
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0;

	if (head == NULL)
		return (sum);
	current = head;
	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
