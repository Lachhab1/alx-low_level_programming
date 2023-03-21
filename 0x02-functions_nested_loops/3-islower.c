#include "main.h"

/**
 * _islower - return 0 or 1 considerring the value of
 *	caractere is lowercase or not
 */

int _islower(int c)
{
	if (c <= 122 && c >= 97)
	{
		return (1);
	}
	return (0);
}
