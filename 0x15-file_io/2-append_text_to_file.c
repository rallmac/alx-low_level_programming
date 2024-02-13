#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
#include <string.h>

/**
 * append_text_to_file - the function writes
 * texts to a file and adds the text to the line after the last
 * @filename: the name of the file to receive the input
 * @text_content: the text to be appended to the next line
 *
 * Return: 1 on success and NULL if failed
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, strlen(text_content));
		if (bytes_written ==  -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
