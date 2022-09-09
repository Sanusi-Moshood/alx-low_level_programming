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

	printf("size of a char: %zu byte(s) \n", sizeof(charType));
	printf("size of an int: %zu byte(s) \n", sizeof(intType));
	printf("size of a long int: %zu byte(s) \n", sizeof(x));
	printf("size of a long long int: %zu byte(s) \n", sizeof(y));
	printf("size of a float: %zu byte(s) \n", sizeof(floatType));
}
