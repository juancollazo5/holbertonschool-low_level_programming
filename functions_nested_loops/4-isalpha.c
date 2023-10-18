#include "main.h"

/**
 * _isalpha - check the code
 * @c: letter
 * Return: 1 if c is a letter
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
