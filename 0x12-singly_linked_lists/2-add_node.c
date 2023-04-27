#include "lists.h"
/**
 * add_node - function to add a node to a linked list
 * @head: argument head
 * @str: string passed in
 * Return: new element address on success
 */
list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	int count = 0;
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
	ptr->next = (*head);
	(*head) = ptr;
	return (*head);
}
