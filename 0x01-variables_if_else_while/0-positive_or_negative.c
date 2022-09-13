#include <stdlib.h>
#include <time.h>
/* more headers goes here */

/*betty style doc for function main goes here*/
/*
 *Description : prints out greater than, is or less than zero
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*your code goes there*/
	if (n > 0)
	{
		printf("is positive");
	} (n == 0)
	{
		printf("is zero");
	} (n < 0)
	{
		printf("is negative");
	}
	return (0);
}
