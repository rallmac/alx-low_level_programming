#include "hash_tables.h"

/**
 * key_index - Gets the index at which a key or value
 * 	pair should be stored in the array of hash table
 * @key: The key to get the index of
 * @size: THe size of the array of the hash table
 *
 * Return: The index of the key
 * Description: Uses the djb2 algorithm
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
