#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL-terminated string to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, len, bytes;

	if (!filename)
		return (-1);

	o = open(filename, O_WRONLY | O_APPEND);
	if (o == -1)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return (1);
	}

	len = 0;
	while (text_content[len])
		len++;

	bytes = write(fd, text_content, len);
	close(o);

	if (bytes == len)
		return (1);
	else
		return (-1);
}
