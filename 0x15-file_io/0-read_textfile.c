#include "main.h"
/**
 * read_textfile - Reads and prints a text file.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd_read, count_chars, fd_open;
	char *buf_letters;

	if (filename == NULL)
		return (0);
	fd_open = open(filename, O_RDONLY);
	if (fd_open == -1)
		return (0);
	buf_letters = malloc(sizeof(char) * letters);
	if (buf_letters == NULL)
		return (0);
	fd_read = read(fd_open, buf_letters, letters);
	if (fd_read == -1)
	{
		free(buf_letters);
		return (0);
	}
	count_chars = write(STDOUT_FILENO, buf_letters, fd_read);
	if (count_chars == -1)
	{
		free(buf_letters);
		return (0);
	}
	close(fd_open);
	free(buf_letters);
	return (count_chars);
}
