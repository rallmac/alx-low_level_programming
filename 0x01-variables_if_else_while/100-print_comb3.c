#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * this program prints a combination of single numbers without repitition.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar('0' + i);
			putchar('0' + j);

			if (!(i == 8 && j == 9))
			{
				putchar(',');
				putchar(' ');
			}
		}
	} putchar('\n');

	return (0);
}
