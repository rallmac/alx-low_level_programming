#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <string.h>
#include "main.h"

/**
 * error_exit - exit if error
 * @message: the copied information
 *
 * Return: always 0 and return if exit
 */
void error_exit(const char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(98);
}

/**
 * print_elf_header - the elf header file
 * @header: the header file
 * Return: 0 if success
 */
void print_elf_header(const Elf64_Ehdr *header)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; ++i)
		printf(" %02x", header->e_ident[i]);
		printf("\n");

		printf("  Class:                             %s\n",
		header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" :
		header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "Invalid class");

		printf("  Data:                              %s\n",
		header->e_ident[EI_DATA] == ELFDATA2LSB ?
		"2's complement, little endian" :
		header->e_ident[EI_DATA] == ELFDATA2MSB ?
		"2's complement, big endian" : "Invalid data encoding");

		printf("  Version:                           %d (current)\n",
				header->e_ident[EI_VERSION]);

		printf("  OS/ABI:                            %s\n",
		header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" :
		header->e_ident[EI_OSABI] == ELFOSABI_HPUX ? "UNIX - HP-UX" :
		header->e_ident[EI_OSABI] == ELFOSABI_STANDALONE ?
		"Standalone App" : "Others");

		printf("  ABI Version:                       %d\n"
				header->e_ident[EI_ABIVERSION]);

		printf("  Type:                              %s\n",
		header->e_type == ET_NONE ? "NONE (No file type)" :
		header->e_type == ET_REL ? "REL (Relocatable file)" :
		header->e_type == ET_EXEC ? "EXEC (Executable file)" :
		header->e_type == ET_DYN ? "DYN (Shared object file)" :
		header->e_type == ET_CORE ? "CORE (Core file)" : "Others");

		printf("  Entry point address:               0x%llx\n",
				(unsigned long long) header->e_entry);
}

/**
 * main - entry point of the program
 * @argc: argument copy
 * @argv: argument to paste
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int fd;
	ssize_t bytes_read;

	if (argc != 2)
		error_exit("Usage: elf_header elf_filename");

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		error_exit("Error: Cannot open file");

	Elf64_Ehdr header;

	bytes_read = read(fd, &header, sizeof(header));
	if (bytes_read != sizeof(header) || memcmp(header.e_ident,
				ELFMAG, SELFMAG) != 0)
	error_exit("Error: Not an ELF file");

	print_elf_header(&header);

	close(fd);
	return (0);
}

