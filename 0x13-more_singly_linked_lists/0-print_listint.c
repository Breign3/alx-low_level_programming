#include "lists.h"

/**
 * print_listint - prints all the elements
 * @h: pointer that points to the struct
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int num = 0;

	while (h != 0)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
