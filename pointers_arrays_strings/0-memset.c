#include "main.h"
#include <stdio.h>
/**
 * _memset - function that filles memory with constant byte
 * @s: string
 * @b: constant byte
 * @n: length
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
