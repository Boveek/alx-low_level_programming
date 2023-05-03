#include "lists.h"
#include <stdio.h>
/**
 *
 *
 *
 *
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *now = head, *noww = head;
	size_t count = 0;

	while (now && noww && noww->next)
	{
		printf("[%p] %d\n", (void*)now, now->n);
		count++;
		now =  now->next;
		noww = noww->next->next;
		if (now == noww)
		{
			printf("-> [%p] %d\n", (void*)now, now->n);
			return(count);
		}
	}
	while (now)
	{
		printf("[%p] %d\n", (void*)now, now->n);
		count++;
		now = now->next;
	}
	return (count);
}
