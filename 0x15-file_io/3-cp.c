#include "main.h"
/**
 * main - Copy the content of one file to another.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line arguments.
 *
 * Return: 0 on success, or an exit code on failure.
 */
int main(int argc, char *argv[])
{
	int inputFD, outputFD, nBytes_read, nBytes_write;
	char text[BUF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	inputFD = open(argv[1], O_RDONLY);
	if (inputFD == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]);
		exit(98);
	}
	outputFD = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (outputFD == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((nBytes_read = read(inputFD, text, BUF_SIZE)) > 0)
	{
		nBytes_write = write(outputFD, text, nBytes_read);
		if (nBytes_write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
				argv[2]);
			exit(99);
		}
	}
	if (nBytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]);
		exit(98);
	}
	f_close(inputFD);
	f_close(outputFD);
	return (0);
}
/**
 * f_close - close a opened file
 * @FD: file descriptor.
 *
 * Return_ nothing.
 */
void f_close(int FD)
{
	if (close(FD) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file descriptor. %i\n", FD);
		exit(100);
	}
}
