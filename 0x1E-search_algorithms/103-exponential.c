#include "search_algos.h"

/**
 * print_array - It prints an array of integers
 * @array: The pointer to the start of the array
 * @size: The size of the array (number of elements)
 *
 * Return: It returns nothing
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
 * binary_search - It finds value in sorted array using binary search method
 * @array: The pointer to first element in array to be searched
 * @size: The size of the array (number of elements)
 * @value: A value to be searched for
 *
 * Return: It index position of value or -1 if not found or array is null
 */
int binary_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	int mid;

	if (array == NULL || size == 0)
		return (-1);

	while (low <= high)
	{
		mid = low + (high - low) / 2;

		print_array(&array[low], (high - low) + 1);

		if (array[mid] == value)
			return (mid);

		if (array[mid] > value)
			high = mid - 1;

		else
			low = mid + 1;
	}

	return (-1);
}

/**
 * exponential_search - It search for a value in a sorted array using
 *                      exponential search and binary search algorithms
 * @array: The pointer to the array to be searched
 * @size: The size of the array (number of elements)
 * @value: A value to be searched for
 *
 * Return: First index value is found at or -1 if not present or array is null
 */
int exponential_search(int *array, size_t size, int value)
{
	int lower_bound;
	int upper_bound = 1;
	int value_position;

	if (array == NULL || size == 0)
		return (-1);

	while (upper_bound < (int)size && array[upper_bound] < value)
	{
		printf("Value checked array[%d] = [%d]\n", upper_bound, array[upper_bound]);
		lower_bound = upper_bound;
		upper_bound *= 2;
	}

	if (upper_bound >= (int)size)
		upper_bound = size - 1;

	printf("Value found between indexes [%d] and [%d]\n", lower_bound,
	       upper_bound);
	value_position = binary_search(&array[lower_bound],
				       upper_bound - lower_bound + 1, value);

	if (value_position != -1)
		value_position += lower_bound;

	return (value_position);
}
