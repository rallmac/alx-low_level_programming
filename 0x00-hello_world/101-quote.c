#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the program
 *
 * his function prints a simple message without puts or printf function.
 *
 * Return: 1 (error)
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}

