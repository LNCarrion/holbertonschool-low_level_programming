#include "hash_tables.h"

/**
 * key_index - Gets the index of a key in the hash table.
 * @key: The key.
 * @size: The size of the array of the hash table.
 *
 * Return: Index at which the key/value pair should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value, index;

	hash_value = hash_djb2(key);
	index = hash_value % size;

	return (index);
}

