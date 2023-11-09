#include "lists.h"
/**
 * add_dnodeint - Adds a new node to the beginning of a doubly linked list
 * @head: A double pointer to the first node of the list
 * @n: The data for the new node
 *
 * Description:
 * This function adds a new node containing the integer 'n' to the beginning
 * of a doubly linked list.
 *
 * Return: The address of the new element (the added node), or NULL on failure.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	int num = n;

	newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);
	newNode->n = num;
	newNode->next = *head;
	newNode->prev = NULL;

	if (*head != NULL)
		(*head)->prev = newNode;

	*head = newNode;
	return (newNode);
}
