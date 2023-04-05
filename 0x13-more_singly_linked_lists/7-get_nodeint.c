#include"lists.h"
/**
 * get_nodeint_at_index - return the nth node of a linked list
 * @head: pointer to the struct
 * @index: index of the node
 *
 * Return: the nth node of a linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *find;
	unsigned int a = 0;

	if (head != NULL)
	{
		find = head;
		while (find != NULL)
		{
			if (a == index)
			{
				return (find);
			}
			find = find->next;
			a++;
		}
	}
	return (NULL);
}
