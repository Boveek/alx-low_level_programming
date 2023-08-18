#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at
 * a given position
 *
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *new, *prevv/*, *now*/;
	unsigned int i = 0;

	new = malloc(sizeof(dlistint_t));
/**	if (idx == 0)
	{
		now = *h;
		new->n = n;
		new->prev = NULL;
		new->next = now;
		return (new);
	}
*/
	for (i = 0; i < idx; i++)
	{
		prevv = temp;
		if (temp->next == NULL)
		{
			temp->next = new;
			new->n = n;
			new->prev = temp;
			new->next = NULL;
			return (new);
		}
		temp = temp->next;
	}
	prevv->next = new;
	new->n = n;
	new->next = temp;
	new->prev = prevv;

	return (new);
}
