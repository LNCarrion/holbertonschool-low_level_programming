#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

#define BUF_SIZE 64

void print_elf_header(const Elf64_Ehdr *header) {
	int i;

	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; ++i) {
		printf("%02x ", header->e_ident[i]);
	}
	printf("\nClass:                             %s\n",
			header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("Data:                              %s\n",
			header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
	printf("OS/ABI:                            %s\n", header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "Other");
	printf("ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
	printf("Type:                              %s\n",
			header->e_type == ET_EXEC ? "EXEC (Executable file)" :
			header->e_type == ET_DYN ? "DYN (Shared object file)" :
			header->e_type == ET_REL ? "REL (Relocatable file)" : "Unknown");
	printf("Entry point address:               %lx\n", header->e_entry);
}

int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr elf_header;
	ssize_t bytes_read;

	if (argc != 2) {
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1) {
		perror("Error opening file");
		exit(98);
	}

	bytes_read = read(fd, &elf_header, sizeof(elf_header));
	if (bytes_read == -1) {
		perror("Error reading file");
		close(fd);
		exit(98);
	}

	if (bytes_read != sizeof(elf_header) ||
			elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
			elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
			elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
			elf_header.e_ident[EI_MAG3] != ELFMAG3) {
		fprintf(stderr, "Not an ELF file\n");
		close(fd);
		exit(98);
	}

	print_elf_header(&elf_header);

	close(fd);
	return 0;
}

