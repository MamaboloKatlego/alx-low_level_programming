#include "main.h"

/**
 * clear_bit - Sets value of given bit to 1
 * @n: Pointer to num to change
 * @index: index of bit to clear
 *
 * Return: For success 1, for failure -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
