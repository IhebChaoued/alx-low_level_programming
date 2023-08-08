#include "main.h"

/**
 * print_error_and_exit - Print error message and exit with the given code.
 *
 * @exit_code: The exit code to use when terminating the program.
 * @message: The error message to be printed.
 */
void print_error_and_exit(int exit_code, const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(exit_code);
}

/**
 * copy_file - Copy content from file_from to file_to.
 *
 * @file_from: The source file path.
 * @file_to: The destination file path.
 */
void copy_file(const char *file_from, const char *file_to)
{
	int file_from_fd = open(file_from, O_RDONLY);
	int permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	int file_to_fd = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, permissions);
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	if (file_from_fd == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD), exit(98);

	if (file_to_fd == -1)
		dprintf(STDERR_FILENO, ERR_NOWRITE), exit(99);

	while ((bytes_read = read(file_from_fd, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(file_to_fd, buffer, bytes_read);
		if (bytes_written != bytes_read)
			dprintf(STDERR_FILENO, ERR_NOWRITE), exit(99);
	}

	if (bytes_read == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD), exit(98);

	if (close(file_from_fd) == -1)
		dprintf(STDERR_FILENO, ERR_NOCLOSE), exit(100);

	if (close(file_to_fd) == -1)
		dprintf(STDERR_FILENO, ERR_NOCLOSE), exit(100);
}

/**
 * main - Entry point of the program.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: (0) on success, (exit code) on failure.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);

	copy_file(argv[1], argv[2]);

	return (0);
}

