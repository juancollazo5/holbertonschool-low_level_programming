 /**
  * *_memset - function
  *
  * @s: pointer to start of memory area
  * @b: constant byte
  * @n: num bytes
  *
  * Return: pointer
  */
  char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *start = s;

	while (i < n)
{
	*s++ = b;
	i++;
}
	return (start);
}
