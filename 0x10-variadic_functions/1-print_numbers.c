#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: sep char
 * @n: argc
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (separator != NULL)
	{
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", va_arg(args, int));
			continue
		}
		printf("%d%s", va_arg(args, int), separator);
	}
	printf("\n");
	va_end(args);
	}
}
