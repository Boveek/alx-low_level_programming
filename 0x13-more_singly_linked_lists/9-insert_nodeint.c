#include "lists.h"
/**
 * insert_nodeint_at_index - insert n element at node index
 * @head: pointer to the first element in the list
 * @idx: inserting index
 * @n: element to be inserted
 * Return: returns pointer to the inserted node on success
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head, *new;
	unsigned int count = 0;

	while (count < idx - 1 && temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	if (idx > 0 && temp == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0 || *head == NULL)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	else
	{
		new->next = temp->next;
		temp->next = new;
		return (new);
	}
}
