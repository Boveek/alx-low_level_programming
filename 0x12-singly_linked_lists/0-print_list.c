#include "lists.h"
#include <stdio.h>
/**
 * print_list - function that prints a linked list
 * @h: argument node
 * Return: returns the number of nodes printed on success
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] %s\n", "(nil)");
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}
