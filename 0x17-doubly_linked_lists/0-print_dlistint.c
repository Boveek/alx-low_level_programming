#include "lists.h"
/**
 * print_dlistint - prints all the elements of a
 * dlistint_t list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t num = 0;

	if (temp == NULL)
		return (num);
	while (temp->prev != NULL)
		temp = temp->prev;
	while (temp != NULL)
	{
		printf("%d\n",temp->n);
		num++;
		temp = temp->next;
	}
	return (num);
}
