#include "main.h"
#include <stdio.h>

/**
 * print_numbers - Print numbers from 0 to 9.
 *
 * Return: 0 always
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	} putchar('\n');

}

