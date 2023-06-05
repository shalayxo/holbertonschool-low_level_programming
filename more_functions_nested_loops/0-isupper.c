#include "main.h"
#include <stdio.h>
/**
 * _isupper - checks uppercase
 * @c: c checks upper letter
 *
 * Return: uppercase returns 1 and lowercase returns 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
