#include "lists.h"

/**
 * get_nodeint_at_index -  returns the nth node of a linked list
 * @head: first node
 * @index: index of the node to return
 *
 * Return: the nth node, other wise NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;

	while (head != NULL && x < index)
	{
		head = head->next;
		x++;
	}
	if (head != NULL && x == index)
	{
		return (head);
	}

	return (NULL);
}
