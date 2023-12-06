#include "hash_tables.h"

/**
 * key_index - function to give you the index of a key
 * @key: unsigned char
 * @size: of the array of the hash table
 *
 * Return: index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash_value = hash_djb2(key);
unsigned long int index = hash_value % size;

return (index);
}
