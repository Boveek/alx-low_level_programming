#include "main.h"
/**
 * create_file - A function that creates a file
 * @filename: The name of the file passed
 * @text_content: Content to be passed to the file
 * Return: returns 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int count, i;
	int num;
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	i = 0;
	while (text_content[i] != '\0')
	{
		num++;
		i++;
	}
	count = write(fd, text_content, num + 1);
	if (count == -1)
		return (-1);
	close(fd);
	return (1);
}
