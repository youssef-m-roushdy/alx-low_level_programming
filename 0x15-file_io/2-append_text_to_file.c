#include <unistd.h>
#include <fcntl.h>
#include <string.h>
/**
 * append_text_to_file - Append text content to the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: A pointer to the text content to be appended.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, n;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
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
