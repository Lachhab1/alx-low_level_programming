#include <stdio.h>

/**
 *  main - Entry point
 *
 *  Return: Always 0 (Succes)
 */

int main(void)
{
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(char));
	printf("Size of a int: %lu byte(s)\n", (unsigned long)sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(long int));
	printf("Size of a long long int: %lu", (unsigned long)sizeof(long long int));
	printf(" byte(s)\n");
	printf("Size of a float: %lu byte(s)", (unsigned long)sizeof(float));
	return	(0);
}
