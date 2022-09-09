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

	printf("size of an int: %zu bytes(s) \n", sizeof(charType));
	printf("size of an int: %zu bytes(s) \n", sizeof(intType));
	printf("size of an long int: %zu bytes(s) \n", sizeof(x));
	printf("size of an long long int: %zu bytes(s) \n", sizeof(y));
	printf("size of an float: %zu bytes(s) \n", sizeof(floatType));
}
