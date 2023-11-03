#include "hash_tables.h"


/**
 * hash_table_set - Add a key-value pair to the hash table
 * @ht: The hash table
 * @key: The key to add or update
 * @value: The value to associate with the key
 *
 * Return: 1 on success, 0 on failure.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *hash_n, *temp;
	char *new_val;

	if (key == NULL || strlen(key) == 0 || value == NULL ||
			ht == NULL || ht->array == NULL || ht->size == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			new_val = strdup(value);
			if (new_val == NULL)
				return (0);
			free(temp->value);
			temp->value = new_val;
			return (1);
		}
		temp = temp->next;
	}

	hash_n = new_node(key, value);

	hash_n->next = ht->array[index];
	ht->array[index] = hash_n;
	return (1);
}

/**
 * new_node - Create a new hash node with the given key and value
 * @key: The key to add
 * @value: The value to associate with the key
 *
 * Return: A pointer to the newly created hash node, or NULL on failure.
 */

hash_node_t *new_node(const char *key, const char *value)
{
	hash_node_t *hash_n;

	hash_n = malloc(sizeof(hash_node_t));
	if (!hash_n)
		return (NULL);

	hash_n->key = strdup(key);
	if (!hash_n->key)
	{
		free(hash_n);
		return (NULL);
	}

	hash_n->value = strdup(value);
	if (!hash_n->value)
	{
		free(hash_n->key);
		free(hash_n);
		return (NULL);
	}

	return (hash_n);
}
