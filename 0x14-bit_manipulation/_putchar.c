#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes the char c to stdout
 * @c: the char to print
 *
 * Return: 1. On success
 * -1 is returned, On error, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
