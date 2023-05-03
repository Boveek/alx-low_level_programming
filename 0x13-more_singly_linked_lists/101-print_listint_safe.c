#include "lists.h"
#include <stdio.h>
/**
 * print_listint_safe - function that prints a linked
 * list that has an infinte loop
 * @head: pointer to the address of the first element in the list
 * Return: returns the number of nodes printed
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *now = head, *noww = head;
	size_t count = 0;

	while (now && noww && noww->next)
	{
		printf("[%p] %d\n", (void *)now, now->n);
		count++;
		now =  now->next;
		noww = noww->next->next;
		if (now == noww)
		{
			printf("-> [%p] %d\n", (void *)now, now->n);
			return (count);
		}
	}
	while (now)
	{
		printf("[%p] %d\n", (void *)now, now->n);
		count++;
		now = now->next;
	}
	return (count);
}
