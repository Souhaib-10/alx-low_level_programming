#include "lists.h"
/**
 * sum_dlistint - Compute the sum of data values in a doubly linked list
 * @head: Pointer to the first node in the linked list
 *
 * Description:
 * This function computes and returns the sum of all data values (n) in a
 * doubly linked list starting from the provided 'head'.
 *
 * Return: The sum of data values or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *currentNode;
	int sum = 0;

	if (head == NULL)
		return (0);

	currentNode = head;
	while (currentNode != NULL)
	{
		sum += currentNode->n;
		currentNode = currentNode->next;
	}
	return (sum);
}
