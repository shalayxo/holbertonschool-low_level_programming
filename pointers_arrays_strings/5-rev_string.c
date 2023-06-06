#include "main.h"
#include <stdio.h>
/**
  * rev_string - Prints reverse string in place
  * @s: The string to print
  * Return: void
  */
void rev_string(char *s)
{
	int i, j;
	char c;

	/* Find the length of the string */
	for (i = 0; s[i] != '\0'; i++)
		;
	/* Reverse the string */
	for (i--, j = 0; j < i; i--, j++)
	{
		c = s[j];
		s[j] = s[i];
		s[i] = c;
	}
}
