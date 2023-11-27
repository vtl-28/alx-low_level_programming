#include "main.h"

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char **argv)
{
	int bytesRead, fd_from, fd_to;

	if (argc != 3)
	{
		exit(97);
		fprintf(stderr, "Usage: cp file_from file_to\n");
	}
	fd_from = open(argv[1], O_RDONLY);

	if (fd_from == -1)
	{
		exit(98);
		dprintf(fd_from, "Error: Can't read from file %s\n", argv[1]);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd_to == -1)
	{
		exit(99);
		dprintf(fd_to, "Error: Can't write to %s\n", argv[2]);
	}
	while ((bytesRead = read(fd_from, file_to, 1024)) != -1)
	{
		if (write(fd_to, file_to, bytesRead) == -1)
		{
			exit(99);
			dprintf(fd_to, "Error: Can't write to %s\n", file_to);
		}
	}
	if (close(fd_from) == -1)
	{
		exit(100);
		dprintf(fd_from, "Error: Can't close fd %d\n", fd_from);
	}
	else
		close(fd_from);
	if (close(fd_to) == -1)
	{
		exit(100);
		dprintf(fd_to, "Error: Can't close fd %d\n", fd_to);
	}
	return (0);

}
