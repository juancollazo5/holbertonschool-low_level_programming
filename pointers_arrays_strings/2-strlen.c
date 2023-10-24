#include "main.h"

/**
 * _strlen - Function
 *
 * @s: input string
 *
 * Return: Lenngth of the string
 */
int _strlen(char *s)
{
	int index;

	for (index = 0; s[index] != '\0' ; index++)
		;
	return (index);
}
