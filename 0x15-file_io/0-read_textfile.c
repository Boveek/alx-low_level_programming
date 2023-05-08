#include "main.h"
/**
 * read_textfile - function that reads a file to std output
 * @filename: The file to be read
 * @letters: Number of characters to be read from the file
 * Return: Returns the number of characters written to std output on success
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t count, count1;
	char *buffer;
	int fd;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	count = read(fd, buffer, letters);
	count1 = write(STDOUT_FILENO, buffer, count);
	free(buffer);
	close(fd);
	return (count1);
}
