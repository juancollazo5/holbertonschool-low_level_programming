#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Write a function that prints a name
 * @name: char1
 * @f: char2
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
