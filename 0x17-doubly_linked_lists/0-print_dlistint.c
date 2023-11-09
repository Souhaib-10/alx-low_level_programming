#include "lists.h"

/**
 * print_dlistint_elements - Prints the elements of a doubly linked list
 * @h: Pointer to the head of the list
 *
 * Description: This function prints all elements in a dlistint_t list and
 * returns the number of nodes.
 *
 * Return: The number of nodes in the list.
 */
size_t print_dlistint_elements(const dlistint_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		elements++;
	}
	return (elements);
}
