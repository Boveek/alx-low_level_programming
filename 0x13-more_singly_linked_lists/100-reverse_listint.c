#include "lists.h"
/**
 * reverse_listint - function that reverses a linked list
 * @head: pointer to the first element in the address
 * Return: returns a pointer to the linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = NULL, *now = NULL;

	while (*head)
	{
		now = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		*head = now;
	}
	*head = temp;
	return (*head);
}
