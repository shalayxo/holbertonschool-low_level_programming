#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strchr - locates a character in a string
 * @s: string to check
 * @s: return NULL is character isn't found
 * @c: character to be located
 * Return: new string
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)

			s++;

		else
			return (s);
	}
	if (c == '\0')

		return (0);
	else
		return (NULL);

}
