#include "main.h"

/**
 * _isalpha -checks if letter is lowercase or uppercase
 * @c: character to check
 * Return: 1 if true, 0 if otherwise
 */

int _isalpha(int c)
{
	c = 'a' || 'A';
	if (c <= 'z' || 'Z')
	{
		return (1);
	}
	return (0);
}
