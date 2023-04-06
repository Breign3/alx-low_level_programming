#include "lists.h"

/**
 * insert_nodeint_at index - insert a new node at a given position
 * @head: pointer to the struct
 * @n: integer in struct
 * @idx: index of the list where the node should be added
 * Return: address or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *move = *head;
	unsigned int index;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;

	}
	else
	{
		for (index = 0 ; index - 1 ; index++)
			{
				move = move->next;
				if (move == NULL)
				{
					free(newnode);
					return (NULL);
				}
			}
			newnode->next = move->next;
			move->next = newnode;
	}
	return (newnode);
}
