#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_listint - function that prints all elements in a row
 * @h: pointer to the first node address
 * Return: returns number of elements printed
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	printf("%d\n", h->n);
	count++;
	return (count);
}
