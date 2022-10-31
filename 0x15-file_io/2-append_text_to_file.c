#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: name of the file
 * @text_content: text content to append
 *
 * Return: 1 if success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, rwr, nstr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (nstr = 0; text_content[nstr]; nstr++)
			;

		rwr = write(fd, text_content, nstr);

		if (rwr == -1)
			return (-1);
	}
	close(fd);

	return (1);
}
