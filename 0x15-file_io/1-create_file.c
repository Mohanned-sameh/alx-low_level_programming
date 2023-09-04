#include "main.h"
/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, nletters = 0, rwr;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			nletters++;
	}
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	rwr = write(fd, text_content, nletters);

	if (fd == -1 || rwr == -1)
		return (-1);
	close(fd);

	return (1);
}
