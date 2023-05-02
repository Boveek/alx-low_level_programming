#include "lists.h"
/**
 * listint_len - functions that returns the number of elements in a linked list
 * @h: pointer to the first element of the list
 * Return: returns the number of elements in the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}