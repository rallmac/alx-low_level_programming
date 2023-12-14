#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * his function prints a simple message using printf function.
 *
 * Return: 0 (Success)
 */
int main(void)
	{
		printf("Size of char: %zu bytes\n", sizeof(char));
		printf("Size of int: %zu bytes\n", sizeof(int));
		printf("Size of long: %zu bytes\n", sizeof(long));
		printf("Size of long long: %zu bytes\n", sizeof(long long));
		printf("Size of float: %zu bytes\n", sizeof(float));
		return (0);
	}
