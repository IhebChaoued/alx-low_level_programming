#include "main.h"

/**
 * read_textfile - Reads a text file and prints it.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed.
 *         0 if the file cannot be opened or read, or if filename is NULL,
 *         or if write fails to print the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytesRead;
	ssize_t bytesWritten;
	char buf[READ_BUF_SIZE];

	if (!filename || !letters)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	bytesRead = read(fd, buf, letters);
	if (bytesRead == -1)
	{
		close(fd);
		return (0);
	}

	bytesWritten = write(STDOUT_FILENO, buf, bytesRead);
	if (bytesWritten == -1)
	{
		close(fd);
		return (0);
	}

	close(fd);
	return (bytesWritten);
}
