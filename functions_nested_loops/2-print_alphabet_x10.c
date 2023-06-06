#include "main.h"
#include <unistd.h>
/**
 * print_alphabet_x10 - entry point
 */
void print_alphabet_x10(void)
{
	char c[] = "abcdefghijklmnopqrstuvwxyz";
	int m;
	int y = 1;

	while (y <= 10)
	{
		for (m = 0; m < 26; m++)
		{
			_putchar(c[m]);
		}
	_putchar('\n');
	y++;
	}
}
