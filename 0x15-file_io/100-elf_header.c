#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <string.h>

/**
 * display_error - Display an error message and exit with status code 98
 * @message: The error message to display
 */
void display_error(const char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(98);
}

/**
 * display_elf_header - Display the information contained in the ELF header
 * @header: Pointer to the ELF header structure
 */
void display_elf_header(const Elf64_Ehdr *header)
{
	int i;

	printf("Magic: ");

	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header->e_ident[i]);
	printf("\n");

	printf("Class: %s\n",
	       (header->e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" : "ELF64");
	printf("Data: %s\n",
	       (header->e_ident[EI_DATA] == ELFDATA2LSB)
		       ? "2's complement, little endian"
		       : "2's complement, big endian");
	printf("Version: %d\n", header->e_ident[EI_VERSION]);
	printf("OS/ABI: %d\n", header->e_ident[EI_OSABI]);
	printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
	printf("Type: 0x%x\n", header->e_type);
	printf("Entry point address: 0x%lx\n", header->e_entry);
}

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Return: 0 on success, otherwise exit with status code 98
 */
int main(int argc, char *argv[])
{
	const char *filename;
	int fd;
	Elf64_Ehdr header;
	ssize_t bytes_read;

	if (argc != 2)
		display_error("Usage: elf_header elf_filename");

	filename = argv[1];
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		display_error("Error: Failed to open the file");

	bytes_read = read(fd, &header, sizeof(header));
	if (bytes_read == -1 || bytes_read != sizeof(header))
	{
		close(fd);
		display_error("Error: Failed to read the ELF header");
	}

	if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
	{
		close(fd);
		display_error("Error: Not an ELF file");
	}

	display_elf_header(&header);

	close(fd);
	return (0);
}

