#include "main.h"

/**
 * create_file - Creates a file and writes text_content to it.
 * @filename: The name of the file to create.
 * @text_content: The NULL-terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int o, len, bytes;

	if (!filename)
		return (-1);

	o = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (o == -1)
		return (-1);

	if (!text_content)
	{
		close(o);
		return (1);
	}

	len = 0;
	while (text_content[len])
		len++;

	bytes = write(o, text_content, len);
	close(o);

	if (bytes == len)
		return (1);
	else
		return (-1);
}
