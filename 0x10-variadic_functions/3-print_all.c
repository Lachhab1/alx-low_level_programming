#include "variadic_functions.h"
/**
 * print_all - all thing can printed
 * @format: is the type of the input in order
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	short int flag;
	va_list listArg;
	char *str;

	va_start(listArg, format);
	while (format != NULL && *format != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(listArg, char));
				flag = 1;
				break;
			case 'i':
				printf("%d", va_arg(listArg, int));
				flag = 1;
				break;
			case 'f':
				printf("%f", va_arg(listArg, float));
				flag = 1;
				break;
			case 's':
				str = va_arg(listArg, char*);
				if (str == NULL)
				{
					str = "(nil)";
				}
				printf("%s", str);
				flag = 1;
				break;
			default:
				flag = 0
				break;
		}
		if (format[i + 1] != '\0' && flag)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(listArg);
}
