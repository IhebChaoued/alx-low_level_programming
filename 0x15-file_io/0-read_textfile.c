#include "main.h"

/**
 * read_textfile - Reads a text file and prints it.
 * @filename: The name of the file to read.
 * @letters: The number of letters it should read and print.
 *
 * Return: The actual number of letters it could read and print.
 *         0 if the file cannot be opened or read, or if filename is NULL,
 *         or if write fails or does not write the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int o;
	char *buffer;
	ssize_t bytes;

	o = open(filename, O_RDONLY);
	if (o == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	bytes = read(o, buffer, letters);
	bytes = write(STDOUT_FILENO, buffer, bytes);
	close(o);
	free(buffer);
	return (bytes);
}
