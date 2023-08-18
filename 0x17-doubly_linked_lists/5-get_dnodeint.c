#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to head of the list
 * @index: index of the node to search for, starting from 0
 * Return: nth node or null
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int n;

	if (head == NULL)
		return (NULL);

	for (n = 0; n < index; n++)
	{
		if (temp->next == NULL)
			return (NULL);
		temp = temp->next;
	}
	return (temp);
}
