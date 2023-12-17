#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This program prints the alphabet in lowercase.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	} putchar('\n');

	return (0);
}

