#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - the function to print numbers
 *
 * Return: always return 0.
 */

void print_most_numbers(void)
{
	char i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
			putchar('0' + i);
		}
	} putchar('\n');
}




