#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

/**
 * append_text_to_file - Appends text at the end of a file
 *
 * @filename: Name of the file
 * @text_content: Text to append
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, length = 0;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	if (access(filename, F_OK | W_OK | R_OK) == -1)
		return (-1);

	file_descriptor = open(filename, O_RDWR | O_APPEND);
	if (file_descriptor == -1)
	{
		close(file_descriptor);
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[length])
			length++;

		bytes_written = write(file_descriptor, text_content, length);
		if (bytes_written == -1)
		{
			close(file_descriptor);
			return (-1);
		}
	}
	close(file_descriptor);
	return (1);
}

