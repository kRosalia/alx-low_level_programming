#include "main.h"
#include <stdio.h>

/**
 * _abs - computes absolute figure man abs
 * @n: checks integer
 * Return: 0
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	} else if (n < 0)
	{
		return (-n);
	}

	return (0);
}
