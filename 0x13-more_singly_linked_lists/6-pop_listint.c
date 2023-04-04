#include "lists.h"

/**
 * pop_listint - function to remove the head node of a list
 * @head: pointer to the pointer of the list
 * Return: the value stored in the head node or 0
 */

int pop_listint(listint_t **head)
{
	listint_t *fr;
	int nodedata;

	if (*head == NULL)
	{
		return (0);
	}

	nodedata = (*head)->n;
	fr = (*head)->next;
	free(*head);
	*head = fr;
	return (nodedata);
}
