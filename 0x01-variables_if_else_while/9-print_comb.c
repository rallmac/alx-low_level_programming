#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 *this program prints the alpahabet in lowercase.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{

		putchar('0' + i);

			if (i != 9)
			{
				putchar((i == 9) ? '\n' : ',');
				putchar((i == 9) ? '\0' : ' ');
			}
	} putchar('\n');

	return (0);
}

