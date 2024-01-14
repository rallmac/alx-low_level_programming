#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the argument both count and vector
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: 1 if error and 0 if success
 */

int main(int argc, char *argv[])
{
	int i, j, sum, currentNumber;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	sum = 0;

	for (i = 1; i < argc; i++)
	{
	for (j = 0; argv[i][j] != '\0'; j++)
	{
		if (argv[i][j] < '0' || argv[i][j] > '9')
		{
			printf("Error\n");
			return (1);
		}
	}

	currentNumber = atoi(argv[i]);

	if (currentNumber < 0)
	{
		printf("Error\n");
		return (1);
	}

	sum += currentNumber;
	}

	printf("%d\n", sum);

	return (0);
}
