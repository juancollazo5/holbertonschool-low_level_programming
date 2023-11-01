#include "main.h"

/**
 * factorial - function
 * @n: integer
 *
 * Return: -1 if n is lower than 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
