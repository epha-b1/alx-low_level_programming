#include "main.h"

/**
 * create_file - creates a file and writes content to it
 * @filename: name of the file to create
 * @text_content: content to write to the file (NULL terminated string)
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, count = 0, write_status;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[count] != '\0')
			count++;
		write_status = write(fd, text_content, count);
		if (write_status == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
