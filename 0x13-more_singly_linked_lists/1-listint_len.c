#include "lists.h"

/**
 * lisyint_len -returns the number of a element
 * in a linked list
 * h: point that points to the struct.
 *
 * Return: number of elements
 */


size_t listint_len(const listint_t *h)
{
	int num = 0;
		while (h != 0)
		{
			h = h->next;
			num++;
		}
		return (num);
}
