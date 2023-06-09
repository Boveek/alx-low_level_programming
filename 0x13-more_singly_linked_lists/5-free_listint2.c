#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - function that frees the elements in a linked list
 * @head: pointer to the first element in a linked list
 * Return: returns nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
