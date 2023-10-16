#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0.
 */
int main(void)
{
char a, b;

for (a = 'a'; a <= 'z'; a++)
for (b = 'A'; b <= 'Z'; b++)
putchar(a);
putchar(b);
putchar('\n');

return (0);
}
