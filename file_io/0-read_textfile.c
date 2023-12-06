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
int fd, count, prt;
char *buffer;

if (filename == NULL) /*Error Proof.*/
	return (0);


fd = open(filename, O_RDONLY); /*Opening a file to be read only.*/
if (fd == -1)
	return (0);

buffer = malloc(sizeof(char) * letters); /*Space for amount of letters.*/

if (buffer == NULL) /*Error Proof.*/
	return (0);

/*Reads letters in the file that are being counted.*/
count = read(fd,  buffer, letters);
if (count == -1)
	return (0);

/*Writes amount of 'char's being counted.*/
prt = write(STDOUT_FILENO, buffer, count);

if (prt == -1) /*Error Proof.*/
	return (0);

free(buffer); /*Free space to contain letters.*/
close(fd); /*Closes file being managed.*/

return (count);
}
