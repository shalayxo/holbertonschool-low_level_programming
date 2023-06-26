#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates array
 * @size: dize of memory
 * @c: specific char
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int x;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(char) * (size));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < size; x++)
	{
		ptr[x] = c;
	}

	ptr[size] = '\0';

	return (ptr);
}
