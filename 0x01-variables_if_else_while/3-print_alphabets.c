#include <stdio.h>



/**
 *
 *  * main - prints the alphabet
 *
 *   * in lowercase followed by a new line
 *
 *    * Return: 0(success)
 *
 *     */



int main(void)

{
	char lower = 'a';
	char upper = 'A';



	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}

	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}

	putchar('\n');

	return (0);

}
