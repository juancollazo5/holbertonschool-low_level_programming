#include "main.h"
#include <stdio.h>

/**
 * rev_string - check the code
 *
 * Return: Always 0.
 */

void rev_string(char *s)

{
    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}
