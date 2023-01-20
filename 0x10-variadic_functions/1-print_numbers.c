#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - funtion to print numbers
 * @separator: separator for numbers
 * @n: number of args
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;


	va_start(list, n);

	for (i = 1; i <= n; i++)
	{
		if (separator && i != n)
		{
			printf("%d%s", va_arg(list, int), separator);
		}

		if (i == n)
			printf("%d", va_arg(list, int));

	}
	printf("\n");
	va_end(list);
}
