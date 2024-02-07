#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *e_file);
void print_magic(unsigned char *e_file);
void print_class(unsigned char *e_file);
void print_data(unsigned char *e_file);
void print_version(unsigned char *e_file);
void print_abi(unsigned char *e_file);
void print_osabi(unsigned char *e_file);
void print_type(unsigned int e_type, unsigned char *e_file);
void print_entry(unsigned long int e_entry, unsigned char *e_file);
void close_elf(int elf);

/**
 * check_elf - verify if the file is an elf file
 * @e_file: pointer to the e_file
 *
 * Description: if file not elf file exit code 98
 */
void check_elf(unsigned char *e_file)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if (e_file[index] != 127 &&
		    e_file[index] != 'E' &&
		    e_file[index] != 'L' &&
		    e_file[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_magic - prints the numbers of the header of the elf file
 * @e_file: pointer to elf file
 */
void print_magic(unsigned char *e_file)
{
	int index;

	printf("  Magic:   ");

	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", e_file[index]);

		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_class - print class of elf header
 * @e_file: pointer to elf file
 */
void print_class(unsigned char *e_file)
{
	printf("  Class:                             ");

	switch (e_file[EI_CLASS])
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
		printf("<unknown: %x>\n", e_file[EI_CLASS]);
	}
}

/**
 * print_data - display data of the elf file's header
 * @e_file: pointer to elf file
 */
void print_data(unsigned char *e_file)
{
	printf("  Data:                              ");

	switch (e_file[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", e_file[EI_CLASS]);
	}
}

/**
 * print_version - print version of elf file header
 * @e_file: pointer to elf file
 */
void print_version(unsigned char *e_file)
{
	printf("  Version:                           %d",
			e_file[EI_VERSION]);

	switch (e_file[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * print_osabi - print os/abi of an elf header file
 * @e_file: pointer to elf file
 */
void print_osabi(unsigned char *e_file)
{
	printf("  OS/ABI:                            ");

	switch (e_file[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", e_file[EI_OSABI]);
	}
}

/**
 * print_abi - print the abi version
 * @e_file: pointer to elf file
 */
void print_abi(unsigned char *e_file)
{
	printf("  ABI Version:                       %d\n",
	       e_file[EI_ABIVERSION]);
}

/**
 * print_type - Prints the type of an ELF header
 * @e_type: elf type
 * @e_file: pointer to elf
 */
void print_type(unsigned int e_type, unsigned char *e_file)
{
	if (e_file[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                              ");

	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
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
		printf("<unknown: %x>\n", e_type);
	}
}

/**
 * print_entry - print entery of an elf header
 * @e_entry: address of entery point
 * @e_file: pointer to elf file
 */
void print_entry(unsigned long int e_entry, unsigned char *e_file)
{
	printf("  Entry point address:               ");

	if (e_file[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_file[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}

/**
 * close_elf - close elf file
 * @elf: descriptor of elf file
 *
 * Description: exit code 98 if file can't be closed
 */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - main test program
 * @argc: number of arguments given
 * @argv: arguments entered
 *
 * Return: 0 on success
 *
 * Description: exit code 98 if not elf file
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int o, r;

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(o, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		close_elf(o);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	check_elf(header->e_ident);
	printf("ELF Header:\n");
	print_magic(header->e_ident);
	print_class(header->e_ident);
	print_data(header->e_ident);
	print_version(header->e_ident);
	print_osabi(header->e_ident);
	print_abi(header->e_ident);
	print_type(header->e_type, header->e_ident);
	print_entry(header->e_entry, header->e_ident);

	free(header);
	close_elf(o);
	return (0);
}

