#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>


/**
 * print_strings - function to print strings
 * @separator: string separator
 * @n: number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strings;
	char *ptr;

	va_start(strings, n);

	if (*separator == '\0')
		return;

	for (i = 1; i <= n; i++)
	{
		ptr = va_arg(strings, char *);

		if (*ptr == '\0')
			printf("(nil)");

		if (i != n)
		{
			printf("%s%s", ptr, separator);
		}

		if (i == n)
		{
			printf("%s", ptr);
		}
	}
	va_end(strings);
	printf("\n");
}
