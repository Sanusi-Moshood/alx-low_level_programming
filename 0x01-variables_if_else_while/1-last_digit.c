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
	int n, x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	scanf("%d", &n);
	printf("Last digit of %d is %d ", n, x);
	if (x < 5)
	printf("and is greater than 5");
	 else if (x == 0)
	printf("and is 0");
	else if (x != 0 && x < 6)
	printf("and is less than 6 and not 0");
	return (0);
}
