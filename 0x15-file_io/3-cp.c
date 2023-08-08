#include "main.h"

/**
 * main - Entry point of the program.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: (0) on success, (exit code) on failure.
 */
int main(int argc, char **argv)
{
	int file_from_fd = open(file_from, O_RDONLY);
	int permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	int file_to_fd = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, permissions);
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);

	if (file_from_fd == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, argv[1]), exit(98);

	if (file_to_fd == -1)
		dprintf(STDERR_FILENO, ERR_NOWRITE, argv[2]), exit(99);

	while ((bytes_read = read(file_from_fd, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(file_to_fd, buffer, bytes_read);
		if (bytes_written != bytes_read)
			dprintf(STDERR_FILENO, ERR_NOWRITE, argv[2]), exit(99);
	}

	if (bytes_read == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, argv[1]), exit(98);

	if (close(file_from_fd) == -1)
		dprintf(STDERR_FILENO, ERR_NOCLOSE), exit(100);

	if (close(file_to_fd) == -1)
		dprintf(STDERR_FILENO, ERR_NOCLOSE), exit(100);

	return (EXIT_SUCCESS);
}
