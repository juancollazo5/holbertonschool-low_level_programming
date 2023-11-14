#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - write a function that executes a parameter
 * @array: int
 * @size: is the size of the array
 * @action: is a pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
	{
		while (size--)
			action(*array++);
	}
}
