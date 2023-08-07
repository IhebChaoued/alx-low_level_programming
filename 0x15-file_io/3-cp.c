#include "main.h"

/**
 * print_error_and_exit - Print error message and exit with the given code.
 *
 * @exit_code: The exit code to use when terminating the program.
 * @message: The error message to be printed.
 */
void print_error_and_exit(int exit_code, const char *message)
{
	dprintf(2, "%s\n", message);
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
		print_error_and_exit(98, "Error: Can't read from file");


	if (file_to_fd == -1)
		print_error_and_exit(99, "Error: Can't write to file");

	while ((bytes_read = read(file_from_fd, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(file_to_fd, buffer, bytes_read);
		if (bytes_written != bytes_read)
			print_error_and_exit(99, "Error: Can't write to file");
	}

	if (bytes_read == -1)
		print_error_and_exit(98, "Error: Can't read from file");

	if (close(file_from_fd) == -1)
		print_error_and_exit(100, "Error: Can't close file descriptor");

	if (close(file_to_fd) == -1)
		print_error_and_exit(100, "Error: Can't close file descriptor");
}

/**
 * main - Entry point of the program.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: (0) on success, other values on failure.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
		print_error_and_exit(97, "Usage: cp file_from file_to");

	copy_file(argv[1], argv[2]);

	return (0);
}