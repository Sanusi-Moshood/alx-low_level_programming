#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - maiin file
 * Description: Last line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 < 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, x);
	} else
		if (n % 10 == 0)
		{
			printf("Last digit of %d is %d and is 0", n, x);
		}
		else
			if (n % 10 != 0 && x < 6)
			{
				printf("Last digit of %d is %d and is less than 6 and not 0", n, x);
			}
	return (0);
}
