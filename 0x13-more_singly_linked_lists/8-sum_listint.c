#include "lists.h"
/**
 * sum_listint - function that calculate the n element of a linked list
 * @head: Pointer to the first element in the list
 * Return: returns the sum of n element if successful
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
