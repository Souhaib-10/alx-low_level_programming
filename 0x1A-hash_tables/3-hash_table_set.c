#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Adds a new node at the beginning of a hash_node list.
 * @head: Pointer to pointer head of a hash_node list.
 * @value: Value of the element.
 * @key: Key of the element.
 * Return: The address of the new element, or NULL if it failed.
 */
hash_node_t *add_node(hash_node_t **head, const char *value, const char *key)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);

	new_node->value = strdup(value);
	new_node->key = strdup(key);
	if (new_node->value == NULL || new_node->key == NULL)
	{
		free(new_node->value);
		free(new_node->key);
		free(new_node);
		return (NULL);
	}

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

/**
 * hash_table_set - Adds or updates an element in the hash table.
 * @ht: Pointer to the hash table.
 * @key: Key of the element.
 * @value: Value of the element.
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	for (node = ht->array[index]; node != NULL; node = node->next)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			if (node->value == NULL)
				return (0);
			return (1);
		}
	}

	if (add_node(&(ht->array[index]), value, key) == NULL)
		return (0);

	return (1);
}
