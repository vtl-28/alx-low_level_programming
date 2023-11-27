#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to the POSIX
 * standard output
 * @filename: name of the file to be read
 * @letters: number of letters it should read
 * Return: returns the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t numCharsToRead = 0, count;
	char *data;
	FILE *ptr;

	if (filename == NULL)
		return (0);

	ptr = fopen(filename, "r");

	if (ptr == NULL)
		return (0);

	data = (char *)malloc(letters * sizeof(char));

	if (data ==  NULL)
	{
		fclose(ptr);
		return (0);
	}

	count = fread(data, sizeof(char), letters, ptr);

	if (ferror(ptr))
		perror("Error reading from the file");
	else
	{
		fputs(data, stdout);
		numCharsToRead += count;
	}
	fclose(ptr);
	free(data);

	return (numCharsToRead);
}
