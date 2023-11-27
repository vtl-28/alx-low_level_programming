#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: file name to append text to
 * @text_content: text to append
 * Return: 1 on success and -1 on failure
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	long int wrote;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_APPEND, 0661);

	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		wrote = write(file, text_content, strlen(text_content));
		if (wrote == -1)
			return (-1);
	}

	if (close(file) == -1)
		return (-1);

	return (1);
}
