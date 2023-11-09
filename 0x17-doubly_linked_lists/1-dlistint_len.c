#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a doubly linked list
 * @h: a pointer to the head node of the list
 *
 * Description: This function counts the number of nodes in a
 * doubly linked list starting from the given head node.
 *
 * Return: The number of elements in the list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int elements = 0;

	while (h != NULL)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
