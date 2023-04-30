#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - function that adds a node to the end of the list
 * @head: pointer to the first node in the list
 * @n: the integer to be assigned to the node
 * Return: returns the address of the last element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (new);
}
