#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - function that adds a new node to the head
 * @head: pointer to the first element
 * @n: integer input
 * Return: returns a pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = (*head);
	(*head) = new;
	return (new);
}
