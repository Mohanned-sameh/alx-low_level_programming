#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1 if it succeeded, (0) otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

	hash_node_t *new_node = malloc(sizeof(hash_node_t));
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *current = ht->array[index];

	if (!key || !ht || !*key)
		return (0);
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (!new_node->key || !new_node->value)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}
	new_node->next = NULL;
	if (!current)
		ht->array[index] = new_node;
	else
	{
		while (current->next && strcmp(current->key, key) != 0)
			current = current->next;
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			free(new_node->key);
			free(new_node->value);
			free(new_node);
			if (!current->value)
				return (0);
		}
		else
			current->next = new_node;
	}
	return (1);
}
