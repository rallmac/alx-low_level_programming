#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 *this program prints the alpahabet in lowercase without e and q.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a != 'e' && a != 'q')
		{
			putchar(a);
		} a++;
	} putchar('\n');
	return (0);
}

