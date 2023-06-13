#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: bytes to search
 * Return: return pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])

				return (s);
		}
		s++;
	}
	return (NULL);
}
