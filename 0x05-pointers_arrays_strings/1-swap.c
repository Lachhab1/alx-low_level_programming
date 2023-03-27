#include "main.h"

/**
 * swap_int - permuter two integers
 * @a: premier parm for swap
 * @b: second
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
