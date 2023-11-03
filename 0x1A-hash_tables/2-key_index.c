#include "hash_tables.h"
/**
 * key_index - gives the index of a key
 * @key: key
 * @size: size of the hash table
 * Return: index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int result = (hash_djb2(key) % size);

	if (size == 0)
		if (key == NULL || size == 0)
			return (0);

	return (result);
}
