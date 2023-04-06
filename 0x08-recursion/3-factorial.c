#include "main.h"

/**
 * factorial - factoriel function
 *
 * @n: the input we want factoril
 *
 * Return: the result of n!
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
