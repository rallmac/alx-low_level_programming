#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * this program prints all the single numbers in base 10 starting from 0.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	for (int digit = 0; digit <= 9; digit++)
	{
		putchar('0' + digit);
	}

	putchar('\n');

	return (0);
}



