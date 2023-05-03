#include "lists.h"
/**
 * find_listint_loop - a function that finds the loop in a linked list
 * @head: a pointer to the address of the linked list
 * Return: address of the node where the loop starts on success, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p = head;
	listint_t *l = head;

	if (!head)
		return (NULL);
	while (p && l && l->next)
	{
		l =l->next->next;
		p = slow->next;
		if (l == p)
		{
			p = l;
			while (p != l)
			{
				p = p->next;
				l = l->next;
			}
			return (l);
		}
	}

	return (NULL);
}
