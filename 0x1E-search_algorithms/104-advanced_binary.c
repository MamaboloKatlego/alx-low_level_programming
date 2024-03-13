#include "search_algos.h"

/**
 * print_array - It prints an array of integers
 * @array: A pointer to the start of the array
 * @size: The size of the array (number of elements)
 *
 * Return: it returns nothing
 */
void print_array(int *array, int size)
{
	int i;

	if (array == NULL || size == 0)
		return;

	printf("Searching in array: ");

	for (i = 0; i < size; i++)
	{
		if (i == 0)
			printf("%d", array[i]);
		else
			printf(", %d", array[i]);
	}

	printf("\n");
}

/**
 * recursive_binary_search - It searches for a value in a sorted array
 *                           recursively with binary search method
 * @array: A pointer to array to be searched
 * @low: A sub-array start point
 * @high: A sub-array end point
 * @value: A value to be searched for
 *
 * Return: It returns first index value found at or -1 if not present
 */
int recursive_binary_search(int *array, int low, int high, int value)
{
	int mid;

	if (low > high)
		return (-1);

	mid = (low + high) / 2;

	print_array(&array[low], high - low + 1);

	if (array[mid] == value)
	{
		if (array[mid - 1] != value)
			return (mid);
	}

	if (array[mid] < value)
		return (recursive_binary_search(array, mid + 1, high, value));
	else
		return (recursive_binary_search(array, low, mid, value));
}

/**
 * advanced_binary - It implement binary search on sorted array ensuring value
 *                   found index is first index, using recursive approach
 * @array: An array to be searched
 * @size: The size of the array (number of elements)
 * @value: A value to be searched for
 *
 * Return: First index value found at or -1 if not present or array is null
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (recursive_binary_search(array, 0, size - 1, value));
}
