#include "hash_tables.h"

/**
 * create_node - Creates a new hash node with the given key and value.
 * @key: The key to be stored in the node.
 * @value: The value to be stored in the node.
 *
 * Return: A pointer to the newly created node, or NULL on failure.
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (new_node)
	{
		new_node->key = strdup(key);
		new_node->value = (new_node->key) ? strdup(value) : NULL;

		if (!(new_node->key) || !(new_node->value))
		{
			free(new_node->key);
			free(new_node->value);
			free(new_node);
			return (NULL);
		}

		new_node->next = NULL;
	}

	return (new_node);
}

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to add or update the key/value to.
 * @key: The key. It cannot be an empty string.
 * @value: The value associated with the key. It must be duplicated.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *current = ht->array[index];

	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			return (current->value != NULL);
		}
		current = current->next;
	}

	hash_node_t *new_node = create_node(key, value);

	if (!new_node)
		return (0);

	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
