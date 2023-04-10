#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns the value of a bit ar a given index
 * @n: string of 0 and 1 chars
 * @index: index of the bit you want to get
 *
 * Return: value of the bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int hold;

	if (index > 64)
	{
		return (-1);
	}
	hold = n >> index;

	return (hold & 1);
}
