#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - The singly linked list
 *
 * @n: An int
 * @index: The index of the node in the list
 * @next: The pointer to the next node
 *
 * Description: The singly linked list node structure
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - The singly linked list with an express lane
 *
 * @n: An int
 * @index: The index of the node in the list
 * @next: The pointer to the next node
 * @express: The pointer to the next node in the express lane
 *
 * Description: The singly linked list node structure with an express lane
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

void print_array(int *array, int size);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
int recursive_binary_search(int *array, int low, int high, int value);
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);

#endif /* SEARCH_ALGOS */
