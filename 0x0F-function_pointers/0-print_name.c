#include <stdio.h>
#include <stddef.h>
#include "function_pointers.h"

/**
 * print_name - prints a name using a given function
 * @name: name of the person
 * @f: function pointer to the print function
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}

