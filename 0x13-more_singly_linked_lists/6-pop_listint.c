#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a list
 * @head: pointer to the first element in the list
 * Return: returns the element n of the head node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (head == NULL || *head == NULL)
		return (0);
	if (*head)
	{
		temp = (*head)->next;
		num = (*head)->n;
		free(*head);
		*head = temp;
	}
	return (num);
}

