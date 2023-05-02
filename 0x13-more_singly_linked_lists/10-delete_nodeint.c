#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes a node at a particular index
 * @head: address to the first node in the list
 * @index: index of the node to be deleted
 * Return: Returns 1 on success and -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *now;
	unsigned int count = 0;

	if (temp != NULL && index == 0)
	{
		now = temp->next;
		*head = now;
		free(temp);
		return (1);
	}
	while (temp != NULL && count < index - 1)
	{
		temp = temp->next;
		count++;
	}
	if (index > 0 && temp == NULL)
	{
		return (-1);
	}
	if (temp != NULL && index != 0)
	{
		now = temp->next;
		temp->next = now->next;
		free(now);
		return (1);
	}
	return (-1);
}
