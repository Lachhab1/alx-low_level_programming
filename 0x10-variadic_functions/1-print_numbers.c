#include "variadic_functions.h"

/**
 * print_numbers - just a simple human read printed numbers
 *
 * @separator: character to print between numbers
 * @n : numbers of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	if (separator == NULL)
	{
		separator = " ";
	}
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, i));
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
