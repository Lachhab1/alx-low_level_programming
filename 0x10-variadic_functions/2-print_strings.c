#include "variadic_functions.h"

/**
 * print_strings - as its says ..
 * @separator: is a string for separe strings
 * @n: number of arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	if (separator == NULL)
	{
		separator = "";
	}
	for (i = 0; i < n; i++)
	{
		if (va_arg(ap, char*) == NULL)
		{
			printf("(nil)");
			continue;
		}

		printf("%s", va_arg(ap, char*));

		if (i < n - 1)
		{
			printf("%s", separator);
		}
		printf("\n");
		va_end(ap);
	}
}
