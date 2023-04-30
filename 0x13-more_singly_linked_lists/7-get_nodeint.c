#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a linked list
 * @head: pointer to the address of the first node
 * @index: index of the element
 * Return: returns the address of the index element
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int count;

	if (head == NULL)
		return (NULL);
	for (count = 0; count < index; count++)
	{
		temp = temp->next;
	}
	if (!temp)
		return (NULL);
	return (temp);
}

