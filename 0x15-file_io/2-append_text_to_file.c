#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 * Return: 1 if the file exists. -1 if the fails does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, t, s = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (s = 0; text_content[s]; s++)
			s++;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	t = write(fd, text_content, s);

	if (fd == -1 || t == -1)
		return (-1);
	close(fd);
	return (1);
}
