#include "lists.h"
/**
 * add_dnodeint_end - Adds a new node to the end of a doubly linked list
 * @head: A double pointer to the first node of the list
 * @n: The data for the new node
 *
 * Description:
 * This function adds a new node containing the integer 'n' to the end of a
 * doubly linked list.
 *
 * Return: The address of the new element (the added node), or NULL on failure.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *lastNode;
	int data = n;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = data;
	newNode->next = NULL;

	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}
	lastNode = *head;
	while (lastNode->next != NULL)
		lastNode = lastNode->next;
	lastNode->next = newNode;
	newNode->prev = lastNode;

	return (newNode);
}
