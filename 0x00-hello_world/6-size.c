#include <stdio.h>

/*
* Answer watched from video
*
* main - Entry point
*
* Description: 'the program's description'
*
* Return: always 0 (Success)
*/
int main(void)/*function main*/
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
