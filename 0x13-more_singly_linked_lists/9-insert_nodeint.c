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
	listint_t *temp = *head, *new, *temp2;
	unsigned int count = 0;

	if (*head == NULL)
		return (NULL);
	while (count < idx - 1)
	{
		temp = temp->next;
		count++;
	}
	temp2 = temp->next;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	temp->next = new;
	new->n = n;
	new->next = temp2;
	return (new);
}
