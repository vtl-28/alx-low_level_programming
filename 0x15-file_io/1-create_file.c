#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: file name to be created
 * @text_content: content to be written to the file
 * Return: 1 on sucess, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file;
	FILE *empty;
	const char *emptyfile = "emptyfile.txt";

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		empty = fopen(emptyfile, "w");

	if (empty == NULL)
		return (-1);

	file = open(filename,  O_WRONLY | O_CREAT, 0600);

	if (!file)
		return (-1);

	write(file, text_content, strlen(text_content));

	return (1);

}
