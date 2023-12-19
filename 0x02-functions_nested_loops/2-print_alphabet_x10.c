#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * this program prints a to z in lowecase 10 times
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int a;
	char b;

	for (a = 0; a < 10; a++)
	{

		for (b = 'a'; b <= 'z'; b++)
		{
			putchar(b);
		} putchar('\n');

	}
	return (0);
}

