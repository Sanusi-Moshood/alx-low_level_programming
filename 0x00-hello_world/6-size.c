#include <stdio.h>
/**
 * main - main
 *
 * Return: 0
 */
int main(void)
{
	int intType;

	char charType;

	float floatType;

	long int x;

	long long int y;

	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(x));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(y));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
	return(0);
}
