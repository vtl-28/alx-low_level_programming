#include "main.h"
#include "FD_functions.c"

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 on success, 1 on failure
 */

int main(int argc, char **argv)
{
	int bytesRead, fd_from, fd_to;
	char *file_from = argv[1], *file_to = argv[2];
	long int wrote;

	if (argc != 3)
	{
		exit(97);
		fprintf(stderr, "Usage: cp file_from file_to\n");
	}
	fd_from = open(file_from, O_RDONLY);

	fd_dest(fd_from, file_from);

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	fd_source(fd_to, file_to);
	while ((bytesRead = read(fd_from, file_to, 1024)) != -1)
	{
		wrote = write(fd_to, file_to, bytesRead);
		if (wrote == -1)
		{
			exit(99);
			dprintf(fd_to, "Error: Can't write to %s\n", file_to);
		}
	}

	close_dest(fd_from);
	close_source(fd_to);

	return (0);

}
