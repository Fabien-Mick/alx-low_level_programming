#include "main.h"
#include <fcntl.h>

/**
 * create_file - creates a file and writes text content to it
 * @filename: the name of the file to create
 * @text_content: a NULL-terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, written_bytes, text_len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[text_len])
		text_len++;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	written_bytes = write(fd, text_content, text_len);
	if (written_bytes == -1 || written_bytes != text_len)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
