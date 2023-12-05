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
int o_f, r_f, w_f;
char *buffer;

if (filename == NULL) /*Error Proof.*/
	return (0);


o_f = open(filename, O_RDONLY); /*Opening a file to be read only.*/
if (o_f == -1)
	return (0);

buffer = malloc(sizeof(char) * letters); /*Space for amount of letters.*/

if (buffer == NULL) /*Error Proof.*/
	return (0);

/*Reads letters in the file that are being counted.*/
r_f = read(o_f,  buffer, letters);
if (r_f == -1)
	return (0);

/*Writes amount of 'char's being counted.*/
w_f = write(STDOUT_FILENO, buffer, count);

if (w_f == -1) /*Error Proof.*/
	return (0);

free(buffer); /*Free space to contain letters.*/
close(0_f); /*Closes file being managed.*/

return (count);
}
