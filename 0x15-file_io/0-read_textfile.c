#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int o;
	char *buffer;
	ssize_t bytes;

	if (!filename || !letters)
		return (0);

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
