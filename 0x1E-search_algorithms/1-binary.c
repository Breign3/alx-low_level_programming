#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the binary search algorithm
 * @array: array of integers
 * @size: size of array
 * @value: value to search for
 * Return: index of value or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{

	size_t y, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (y = left; y < right; y++)
			printf("%d, ", array[y]);
		printf("%d\n", array[i]);

		y = left + (right - left) / 2;
		if (array[y] == value)
			return (y);
		if (array[y] > value)
			right = y - 1;
		else
			left = y + 1;
	}

	return (-1);
}
