#include "main.h"

/**
 * get_endianness - It checks if machine is big or little endian
 * Return: For big is 0, for little is 1
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
