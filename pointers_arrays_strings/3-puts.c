#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _puts - Write a function that prints a string
 * @*str: The string to print
 * @str: Parameter
 * Return: void
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)

	{
		putchar(*str);
	}

		putchar('\n');
}
