#include "main.h"

/**
 * _abs - Compute the absolute value of an integer.
 * Return : Absolute value of number or zero
 */

int _abs(int c)
{
	int abs_val;
	if (c < 0)
	{
	abs_val = c * -1;
	return (abs_val);
	}
	return (0);
}
