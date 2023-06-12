#include "main.h"

/**
 * _strcmp - compares pointers to two strings.
 * @s1: a pointer to the first sting
 * @s2: a pointer to the second string
 * Return:if str1 < str2, the negative diff of the first unmatched char
 * If str1 == str2, 0.
 * if str1 > str2, the positive diff of the first unmatchs char
 */

int _strcmp(char *s1, char *s2)

{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
