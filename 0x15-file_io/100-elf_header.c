#include "main.h"

void print_magic(unsigned char e_ident[]);
void print_class(unsigned char e_ident[]);
void print_data(unsigned char e_ident[]);
void print_version(unsigned char e_ident[]);
void print_osabi(unsigned char e_ident[]);
void print_abiversion(unsigned char e_ident[]);
void print_type(uint16_t e_type);
void print_entry(uint64_t e_entry);
/**
 * print_magic - Print ELF magic bytes
 * @e_ident: ELF identification bytes
 */
void print_magic(unsigned char e_ident[])
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", e_ident[i]);
	printf("\n");
}

/**
 * print_class - Print ELF class
 * @e_ident: ELF identification bytes
 */
void print_class(unsigned char e_ident[])
{
	printf("  Class:                             ");
	switch (e_ident[EI_CLASS])
	{
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown>\n");
			break;
	}
}

/**
 * print_data - Print ELF data encoding
 * @e_ident: ELF identification bytes
 */
void print_data(unsigned char e_ident[])
{
	printf("  Data:                              ");
	switch (e_ident[EI_DATA])
	{
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown>\n");
			break;
	}
}

/**
 * print_version - Print ELF version
 * @e_ident: ELF identification bytes
 */
void print_version(unsigned char e_ident[])
{
	printf("  Version:                           %d (current)\n",
		e_ident[EI_VERSION]);
}

/**
 * print_osabi - Print ELF OS/ABI
 * @e_ident: ELF identification bytes
 */
void print_osabi(unsigned char e_ident[])
{
	printf("  OS/ABI:                            ");
	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		default:
			printf("<unknown: %d>\n", e_ident[EI_OSABI]);
			break;
	}
}

/**
 * print_abiversion - Print ELF ABI version
 * @e_ident: ELF identification bytes
 */
void print_abiversion(unsigned char e_ident[])
{
	printf("  ABI Version:                       %d\n", e_ident[EI_ABIVERSION]);
}

/**
 * print_type - Print ELF type
 * @e_type: ELF type
 */
void print_type(uint16_t e_type)
{
	printf("  Type:                              ");
	switch (e_type)
	{
		case ET_NONE:
			printf("NONE (No file type)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown>\n");
			break;
	}
}

/**
 * print_entry - Print ELF entry point address
 * @e_entry: ELF entry point address
 */
void print_entry(uint64_t e_entry)
{
	printf("  Entry point address:               %#lx\n", e_entry);
}

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	int fd, read_result;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot open file %s\n", argv[1]);
		exit(98);
	}

	/* Read ELF header */
	read_result = read(fd, &header, sizeof(header));
	if (read_result != sizeof(header))
	{
		dprintf(STDERR_FILENO, "Error: Cannot read ELF header\n");
		close(fd);
		exit(98);
	}

	/* Print ELF header information */
	print_magic(header.e_ident);
	print_class(header.e_ident);
	print_data(header.e_ident);
	print_version(header.e_ident);
	print_osabi(header.e_ident);
	print_abiversion(header.e_ident);
	print_type(header.e_type);
	print_entry(header.e_entry);

	close(fd);
	return (0);
}
