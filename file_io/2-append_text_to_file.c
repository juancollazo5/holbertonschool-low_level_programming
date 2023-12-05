#include "main.h"

/**
 * append_text_to_file - add content to end of file.
 * @filename: name of file.
 * @text_content: content of file.
 *
 * Return: Appended file.
 */

int append_text_to_file(const char *filename, char *text_content)
{
int of, rf, wf;

if (filename == NULL)
	return (-1);

of = open(filename, O_WRONLY | O_APPEND);
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
if (wf == -1)
	return (-1);

close(of);
return (1);
}
