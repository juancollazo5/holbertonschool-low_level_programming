/**
  * *-memcpy - function
  * @dest: pointer to dest str
  * @src: source
  * @n: num bytes
  * Return: pointer to beginning of memory area dest
  */
  char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char *start = dest;

	while (i < n)
{
	*dest++ = *src++;
		i++;
}
	return (start);
}
