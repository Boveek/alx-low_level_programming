#include "lists.h"
/**
 * add_node_end - function that puts a node at the end of a list
 * @head: list pointer
 * @str: string input
 * Return: returns pointer on success
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	int count = 0;
	list_t *swap = *head;
	list_t *ptr;

	while (str[i] != '\0')
	{
		count++;
		i++;
	}
	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = count;
	ptr->next = NULL;
	if (*head == NULL)
	*head = ptr;
	return (ptr);
	while (swap->next)
	{
		swap = swap->next;
		swap->next = ptr;
	}
	return (ptr);
}
