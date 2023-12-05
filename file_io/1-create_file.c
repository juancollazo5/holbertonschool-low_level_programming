#include "main.h"

/**
 * create_file - Function that creates a file.
 * @filename: name of file.
 * @text_content: content of file.
 *
 * Return: Created file.
 */

int create_file(const char *filename, char *text_content)
{
int of, rf, wf;

if (filename == NULL)
	return (-1);

of = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (of == -1)
{
	return (-1);
}

	if (text_content == NULL)
		text_content = "";
	{
		for (rf = 0; text_content[rf] != '\0';)
			rf++;
	}

wf = write(of, text_content, rf);

if (wf != rf)
	return (-1);

close(of);
return (1);
}
