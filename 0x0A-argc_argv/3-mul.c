#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Calls the argument count and vector
 * @argc: argument count variable
 * @argv: argument vector variable
 *
 * Return: returns 1 if error and 0 if sucess
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
