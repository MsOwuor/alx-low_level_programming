#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of a list.
 * @head: pointer to the first node
 * @n: information for the new node
 *
 * Return: pointer to the new node, otherwise NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n; /* set the value of the new node */
	new->next = *head; /* ste the next pointer of the new node to the current head */
	*head = new; /* updte the head to point to the new node */

	return (new);
}
