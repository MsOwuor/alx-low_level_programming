#include "lists.h"

/**
 * pop_listint - deletes the hea node of a linked list
 * @head: pointer to the first element
 *
 * Return: head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int node;

	if (*head == NULL)
	{
		return (0);
	}
	node = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (node);
}
