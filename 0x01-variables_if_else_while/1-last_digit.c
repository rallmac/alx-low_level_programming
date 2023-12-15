#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 *this program prints the value stored the variable n.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, (n % 10));
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, (n % 10));
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, (n % 10));
	}
	return (0);
}
