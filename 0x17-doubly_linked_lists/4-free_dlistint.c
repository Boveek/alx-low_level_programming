#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to head of the list
 * Return: nothing
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head, *next;

	if (head == NULL)
		return;
	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
}
