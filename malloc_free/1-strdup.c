#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strdup - returns pointer to a copy of a string
 * @str: pointer of origional string
 * Return: char
 */

char *_strdup(char *str)
{
	unsigned int x, y, size;
	char *new_str;

	/*allocates memory*/
	str = malloc(sizeof(char) * (size));

	if (str == NULL)
	{
		return (NULL);
	}

	/*makes a copy of a string*/
	for (x = 0, y = 0; x < size; x++, y++)
	{
		str[x] = new_str[y];
	}

	str[size] = '\0';
	new_str[size] = '\0';

	free(new_str);
	return (new_str);
}
