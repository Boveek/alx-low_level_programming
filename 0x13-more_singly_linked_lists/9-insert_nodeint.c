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

	if (*head == NULL)
		return (NULL);
	while (count < idx - 1 && temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (temp == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		*head = new;
		new->next = temp;
		return (new);
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
