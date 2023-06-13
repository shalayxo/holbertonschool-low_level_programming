#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _memcpy - write function that copies memory area
 * @dest: destination
 * @src: source of memory
 * @n: number of memory
 * Return: copied string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
