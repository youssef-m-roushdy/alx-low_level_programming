#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * create_file - Create a file and write text content into it.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to the text content to be written into the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, n;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	n = write(fd, text_content, strlen(text_content));
	if (n == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
