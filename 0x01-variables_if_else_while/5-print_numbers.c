#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 *this program prints all the single numbers in base 10 starting from 0.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		printf("%d", a);
	}
	printf("\n");

	return (0);
}


