#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints argument count and argument vector
 * @argc: argument count of the input
 * @argv: argument vector of the input
 *
 * Return: 1 if error and 0 if success
 */

int main(int argc, char *argv[])
{
	int cents, coins25, coins10, coins5, coins2, coins1, totalCoins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	coins25 = cents / 25;
	cents %= 25;

	coins10 = cents / 10;
	cents %= 10;

	coins5 = cents / 5;
	cents %= 5;

	coins2 = cents / 2;
	cents %= 2;

	coins1 = cents;

	totalCoins = coins25 + coins10 + coins5 + coins2 + coins1;

	printf("%d\n", totalCoins);

	return (0);
}
