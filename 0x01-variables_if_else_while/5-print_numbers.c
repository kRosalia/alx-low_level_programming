#include <stdio.h>

/**
 * main - prints all
 * single digit numbers
 * of base 10 starting from 0
 * followed by a new line
 * Return: Always 0(success)
 */
int main(void)
{
	int base = 0;

	while (base < 10)
	{
		printf("%d", base);
		base++;
	}
	printf("\n");

	return (0);
}
