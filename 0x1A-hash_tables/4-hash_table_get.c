#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - Retrieve a value associated with a key.
 * @ht: Pointer to the hash table.
 * @key: Key of the element.
 * Return: The value associated with a key.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	node = ht->array[index];

	for (; node != NULL; node = node->next)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
	}

	return (NULL);
}
