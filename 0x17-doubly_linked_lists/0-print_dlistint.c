#include "lists.h"

/**
 * print_dlistint - Prints the elements of a doubly linked list
 * @h: Pointer to the head of the list
 *
 * Description: This function prints all elements in a dlistint_t list and
 * returns the number of nodes.
 *
 * Return: The number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int elements = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		elements++;
	}
	return (elements);
}
