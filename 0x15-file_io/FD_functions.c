#include "main.h"

/**
 * fd_dest - checks if file failed to open
 * @fd_value: status of file
 * @file: file name
 */

void fd_dest(int fd_value, char *file)
{
	if (fd_value == -1)
	{
		exit(98);
		dprintf(fd_value, "Error: Can't read from file %s\n",
			file);
	}
}

/**
 * fd_source - checks if file failed to open
 * @fd_value: status of file
 * #file: file name
 */

void fd_source(int fd_value, char *file)
{
	if (fd_value == -1)
	{
		exit(99);
		dprintf(fd_value, "Error: Can't write to %s\n", file);
	}
}

/**
 * close_dest - close file
 * @fd_value: file to close
 */

void close_dest(int fd_value)
{
	if (close(fd_value) == -1)
	{
		exit(100);
		dprintf(fd_value, "Error: Can't close fd %d\n", fd_value);
	}
	else
		close(fd_value);
}

/**
 * close_source - close file
 * @fd_value: file to close
 */

void close_source(int fd_value)
{
	if (close(fd_value) == -1)
	{
		exit(100);
		dprintf(fd_value, "Error: Can't close fd %d\n", fd_value);
	}
	else
		close(fd_value);
}
