#include "lists.h"
/**
 * free_listint_safe - function that frees the nodes
 * in an infinte loop linked list
 * @h: pointer to the address of the first node
 * Return: returns the number of nodes freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *temp;
	int check;

	while (*h)
	{
		check = *h - (*h)->next;
		if (check > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			count++;
		}
		else
		{
			free(*h);
			temp = (*h)->next;
			count++;
			break;
		}
	}
	*h = NULL;
	return (count);
}
