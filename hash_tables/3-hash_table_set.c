#include "hash_tables.h"
#include <string.h>
/**
 * create_node - creates a new key-value entry
 * @key: the key to add
 * @value: the value to add to the key
 * Return: the node
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	if (!key || strlen(key) <= 0 || !value)
		return (NULL);

	/* allocate mem for new node */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (NULL);
	/* dupe key and store in new node */
	new_node->key = strdup(key);

	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}
	/* dupe value and store in new node */
	new_node->value = strdup(value);
	if (new_node->value  == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}
	/* initialize the nxt ptr of new node and set to NULL */
	new_node->next = NULL;
	/* ptr of newly created node */
	return (new_node);
}
/**
 * hash_table_set - set a key:value pair
 * create_node - creates new node for the hash table
 * @ht: Hash table to set
 * @key: key to set
 * @value: value to set at key
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *tmp;

	new_node = NULL;
	/* check for hashtable, empty key or empty value */
	if (!ht || !key || strlen(key) <= 0 || *key <= 0)
		return (0);
	/* get index where new node will be inserted */
	index = key_index((const unsigned char *)key, ht->size);
	/* search for exisiting node with the same key */
	tmp = ht->array[index];
	while (tmp != NULL)
	{
		if (strncmp(key, tmp->key, strlen(key)) == 0)
		{
			/* if key exisits update value and return 1 for success */
			free(tmp->value);
			tmp->value = strdup(value);
			return (tmp->value ? 1 : 0);
		}
		tmp = tmp->next;
	}
	new_node = create_node(key, value);
	/* if key doesn't exisit in hashtable create new node */
	if (new_node == NULL)
		return (0);
	/* prepend new node to the linked list at a given index */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
