#ifndef HASH_TABLE_H
#define HASH_TABLE_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * struct hash_node_s - The node of a hash table
 * @key: It is the key string
 * The key is unique in the HashTable
 * @value: Value corresp to a key
 * @next: The pointer to the next node of the list
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - The hash table data struct
 * @size: Size of the array
 * @array: The array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a chaining collision handling
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

/**
 * struct shash_node_s - The node of a sorted hash table
 * @key: Key string
 * The key is unique in the HashTable
 * @value: Value coreesp to a key
 * @next: The pointer to the next node of the list
 * @sprev: The pointer to the next prev element of the sorted linked list
 * @snext: The pointer to the next element of the sorted linked list
 */
typedef struct shash_node_s
{
	char *key;
	char *value;
	struct shash_node_s *next;
	struct shash_node_s *sprev;
	struct shash_node_s *snext;
} shash_node_t;

/**
 * struct shash_table_s - The sorted hash table data struct
 * @size: Size of the array
 * @array: The array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a chaining collision handling
 * @shead: The pointer to the first element of the sorted linked list
 * @stail: The pointer to the last element of the sorted linked list
 */
typedef struct shash_table_s
{
	unsigned long int size;
	shash_node_t **array;
	shash_node_t *shead;
	shash_node_t *stail;
} shash_table_t;

shash_table_t *shash_table_create(unsigned long int size);
hash_table_t *hash_table_create(unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
char *shash_table_get(const shash_table_t *ht, const char *key);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

#endif
