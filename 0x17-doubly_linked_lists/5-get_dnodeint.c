#include "lists"
/**
 * get_dnodeint_at_index - Get the nth node of a doubly linked list
 * @head: Pointer to the first node in the linked list
 * @index: The index of the node to retrieve
 *
 * Description:
 * This function returns the node at the given index in a doubly linked list
 * starting from the provided 'head'.
 *
 * Return: The nth node if it exists, or NULL if the node is not found.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *currentNode;
	unsigned int currentIndex = 0;

	currentNode = head;

	while (currentNode != NULL)
	{
		if (currentIndex == index)
			return (currentNode);

		currentIndex++;
		currentNode = currentNode->next;
	}
	if (currentIndex == 0 || currentIndex < index)
		return (currentNode);

	currentNode = head;
	return (currentNode->next);
}
