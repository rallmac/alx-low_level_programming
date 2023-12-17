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
	char b;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}
	for (b = 'a'; b <= 'f'; b++)
	{
		putchar(b);
	} putchar('\n');
	return (0);
}
