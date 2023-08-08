#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void print_error_and_exit(const char *message);
void print_elf_header_info(int fd);

/**
 * print_error_and_exit - Print error message and exit with status code 98.
 *
 * @message: The error message to be printed.
 * Return: None.
 */
void print_error_and_exit(const char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(98);
}

/**
 * print_elf_header_info - Print information contained in the ELF header.
 *
 * @fd: The file descriptor of the ELF file.
 * Return: None.
 */
void print_elf_header_info(int fd)
{
	Elf64_Ehdr header;
	ssize_t bytes_read = read(fd, &header, sizeof(Elf64_Ehdr));

	if (bytes_read != sizeof(Elf64_Ehdr))
	{
		print_error_and_exit("Error: Failed to read ELF header");
	}

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (int i = 0; i < EI_NIDENT; ++i)
	{
		printf("%02x", header.e_ident[i]);
		if (i == EI_NIDENT - 1)
		{
			printf("\n");
		}
		else
		{
			printf(" ");
		}
	}

	printf("  Class:                             ");
	switch (header.e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown: %x>\n", header.e_ident[EI_CLASS]);
	}


	printf("  Entry point address:               %#lx\n", header.e_entry);
}

/**
 * main - Displays the information contained in the ELF header.
 *
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{

		print_error_and_exit("Usage: elf_header elf_filename");
	}

	int fd = open(argv[1], O_RDONLY);

	if (fd == -1)
	{
		print_error_and_exit("Error: Can't read file");
	}

	print_elf_header_info(fd);

	close(fd);
	return (0);
}
