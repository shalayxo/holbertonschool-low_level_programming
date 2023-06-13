#include "main.h"
#include <stdio.h>
/**
 * leet - encode string into 1337
 * @str: string to be moded into 1337
 * Return: result
 */
char *leet(char *str)
{

	char a[] = "AaEeOoTtLl";
	char n[] = "4433007711";
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		for (j = 0; j <= 10; j++)
		{
			if (str[i] == a[j])
			{
				str[i] = n[j];
			}
		}
		i++;
	}
	return (str);
}
