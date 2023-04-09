#include "main.h"

/**
 * _isalpha - check if is a letter
 *
 * @c: check the input
 *
 * Return: return 1 if it is a letter 0 then not
 */

int _isalpha(int c)
{

	if ((c <= 122 && c >= 97) ||
		(c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);

}
