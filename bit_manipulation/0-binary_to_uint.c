#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * binary_to_uint - convert binary string to decimal
 * @b: binary string
 * Return: decimal (unsigned int)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	unsigned int i = 0;

	if (b == NULL)
		return (0);

	for (; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
			decimal = (decimal << 1) | 1;
		else if (b[i] == '0')
			decimal <<= 1;
		else
		{
			return (0);
		}
	}
	return (decimal);
}
