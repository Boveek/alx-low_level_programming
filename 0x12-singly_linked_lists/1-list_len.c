#include "lists.h"
/**
 * list_len - Function that calculates the number of nodes in a linked list
 * @h: argument nodes
 * Return: returns the number of nodes when successful
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
