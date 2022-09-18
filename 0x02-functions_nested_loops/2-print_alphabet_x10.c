#include "main.h"

/**
 * print_alphabet_x10 - using prototype void
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	char alpha;
	int count;

	count = 1;

	while (count <= 10)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		count++;
	}
}
