#include "main.h"

/**
 * _pow_recursion - the power of a number
 * @x: the base
 * @y: the expanse
 *
 * Return: the result x^y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
