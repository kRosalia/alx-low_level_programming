#include "main.h"

/**
 * print_sign - print + if n is greater than
 * prints 0 is n is zero
 * prints - if n is less than zero
 * @n: number to be checked
 * Return: 1 fi greater, or 0; or -1 if less than
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
