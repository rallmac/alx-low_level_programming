#include <stdio.h>

/**
 * main - entry point of the program
 * The program prints the name of the file it was compiled from
 * Return: returns 0 on success
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}

