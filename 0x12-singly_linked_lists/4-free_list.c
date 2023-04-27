#include "lists.h"
/**
 * free_list - function that frees a singly linked list
 * @head: the lists to be freed
 * Return: returns nothing
 */
void free_list(list_t *head)
{
	list_t *now;

	while (head != NULL)
	{
		now = head->next;
		free(head->str);
		free(head);
		head = now;
	}
}
