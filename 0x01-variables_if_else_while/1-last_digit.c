#include <stdlib.h>

#include <time.h>

#include <stdio.h>

/* betty style for function main goes there*/

/**
 * main - prints out last digit
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	double lastDigit = n % 10;

	printf("last digit of %d is %f and is ", n, lastDigit);

	if (lastDigit > 5)
	{
		printf("greater than 5\n");

	}
	else if (lastDigit == 0)
	{
		printf("0\n");
	}
	else if (lastDigit < 5)
	{
		printf("less than 6 and not 0\n");
	}
																			return (0);

}
