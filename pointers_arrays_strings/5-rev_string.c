#include "main.h"
#include <stdio.h>

/**
 * rev_string - check the code
 *
 * Return: Always 0.
 */

void rev_string(char *s)

{
  char s[100]; //string declaration
   printf("Enter a string:");
   gets(s); //input
   strrev(s); //reversing string
   printf("The reverse of the string: %s\n", s);
   return 0;
}
