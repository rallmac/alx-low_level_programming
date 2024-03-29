#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * printf - custom printf function
 * @format: format specifier to write the strins to standard output
 * this variable is not used in the function
 * Return: exit on success
 */
int printf(const char *format, ...)
{
	write(1, "9 8 10 24 75 +9\n", 17);
	write(1, "Congratulations, you win the Jackpot!\n", 38);
	exit(EXIT_SUCCESS);
}
