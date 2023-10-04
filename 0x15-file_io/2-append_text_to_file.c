#include "main.h"
/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file.
 * @text_content: The text content to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f_open, f_write;

	if (filename == NULL)
		return (-1);
	f_open = open(filename, O_RDWR | O_APPEND);
	if (f_open == -1)
		return (-1);
	if (text_content != NULL)
	{
		f_write = write(f_open, text_content, _strlen(text_content));
		if (f_write == -1)
			return (-1);
	}
	close(f_open);
	return (1);
}

/**
 * _strlen - calculate the lenght of a string.
 * @str: array of characters.
 *
 * Return: lenght of the string.
 */
int _strlen(char *str)
{
	int count = 0;

	while (*str++)
		count++;
	return (count);
}
