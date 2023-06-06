#include "main.h"
#include <stdio.h>
/**
 * _strlen - Write a function that returns the length of a string
 * @*s: string to count
 * @s: character
 * Return: string length
 */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}
