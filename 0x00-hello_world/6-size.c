#include <stdio.h>

/**
 * main - entry point
 * Return: 0 for success
 */
int main(void)
{
	char charType;
	int intType;
	long longInt;
	long long longlongInt;
	float floatType;

	printf("Size of a char: %d byte(s)\n", sizeOf(charType));
	printf("Size of an int: %d byte(s)\n", sizeOf(intType));
	printf("Size of a long int: %d byte(s)\n", sizeOf(longInt));
	printf("Size of a long long int: %d byte(s)\n", sizeOf(longlongInt));
	printf("Size of a float: %d byte(s)\n", sizeOf(floatType));
	return (0);
}
