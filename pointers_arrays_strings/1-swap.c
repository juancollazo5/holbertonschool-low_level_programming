#include "main.h"
/**
 * swap_int - function
 * @a: variable
 * @b: variable
 */
void swap_int(int *a, int *b);

{
	int change;

	change = *a;
	*a = *b;
	*b = change;
}
