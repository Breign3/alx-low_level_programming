#include "main.h"

/**
 *  _isupper - uppercase letter
 *  @c: char to check
 *
 *  Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 64 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
