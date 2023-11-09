#include "lists.h"
/**
 * free_dlistint - Frees a doubly linked list
 * @head: A pointer to the first node of the doubly linked list
 *
 * Description:
 * This function frees all the nodes in a doubly linked list starting from the
 * given 'head'.
 *
 * Return: No return value (void)
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tempHead = head;

	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		tempHead = head;
		head = head->next;
		free(tempHead);
	}
	free(head);
}
