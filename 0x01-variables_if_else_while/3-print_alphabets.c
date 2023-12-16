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
	char a;
	char A;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	for (A = 'A'; A <= 'Z'; A++)
	{
		putchar(A);
	} putchar('\n');
	return (0);
}

