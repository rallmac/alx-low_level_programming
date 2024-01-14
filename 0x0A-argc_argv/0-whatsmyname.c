#include "main.h"
#include <stdio.h>

/**
 * main - prints argument count and vector
 * @argc: number of arguments
 * @argv: printed vector of argument
 *
 * Return: 0 Always
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
