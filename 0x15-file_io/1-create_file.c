#include "main.h"

/**
 * create_file - Creates a file
 * @filename: name of file to create
 * @text_content: text content of the file
 *
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, nstr, rwr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (nstr = 0; text_content[nstr]; nstr++)
		;

	rwr = write(fd, text_content, nstr);

	if (rwr == -1)
		return (-1);

	close (fd);

	return (1);
}
