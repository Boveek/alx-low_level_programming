#include "main.h"
/**
 * append_text_to_file - function that appends a string in a file
 * @filename: files passed in
 * @text_content: content of the file to be appended
 * Return: returns 1 on success and -1 for error
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int count, num;
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	count = strlen(text_content);
	num = write(fd, text_content, count);
	if (num == -1)
		return (-1);
	close(fd);
	return (1);
}
