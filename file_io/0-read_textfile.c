#include "main.h"

/**
 * read_textfile - function that reads a file.
 * @filename: pointer towards file being read.
 * @letters: amount of letters in a file.
 *
 * Return: letters that were counted.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int of, rf, wf;
char *buffer;

if (filename == NULL) /*Error Proof.*/
	return (0);


of = open(filename, O_RDONLY); /*Opening a file to be read only.*/
if (of == -1)
	return (0);

buffer = malloc(sizeof(char) * letters); /*Space for amount of letters.*/

if (buffer == NULL) /*Error Proof.*/
	return (0);

/*Reads letters in the file that are being counted.*/
rf = read(fd,  buffer, letters);
if (rf == -1)
	return (0);

/*Writes amount of 'char's being counted.*/
wf = write(STDOUT_FILENO, buffer, count);

if (wf == -1) /*Error Proof.*/
	return (0);

free(buffer); /*Free space to contain letters.*/
close(0f); /*Closes file being managed.*/

return (count);
}
