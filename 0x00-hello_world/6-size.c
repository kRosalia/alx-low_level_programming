#include <stdio.h>

/*
* main - Entry point
*
* Description: 'Determine the size of types char, int,
* long int, long long int, float'
*
* Return: always 0 (Success)
*/
int main(void)/* Description: 'prints out sizes of each type'*/
{
	int i;
	long int lt;
	char c;
	long long int llt;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(lt));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(llt));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));

	return (0);
}
