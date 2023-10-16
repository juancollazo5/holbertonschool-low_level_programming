#include <stdio.h>
/**
 * main - prints the size of various types on the computer
 *        it is compiled and run on
 * Return: Always 0.
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

printf("Size of a char: %lubyte(s)\n", (unsigned long)sizeofof(a));

printf("Size of a int: %lubyte(s)\n", (unsigned long)sizeofof(b));

printf("Size of a long int: %lubyte(s)\n", (unsigned long)sizeofof(c));

printf("Size of a long long int: %lubyte(s)\n", (unsigned long)sizeofof(d));

printf("Size of a float: %lubyte(s)\n", (unsigned long)sizeofof(f));

return (0);
}
