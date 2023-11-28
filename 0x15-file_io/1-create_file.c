#include "main.h"

/**
 * create_file - a text file will be created with this.
 * @filename: This will be the file name.
 * @text_content: written file content
 *
 * Return: -1 if its not successful and 1 if it is.
 */
int create_file(const char *filename, char *text_content)
{
	int red, len;

	if (!filename)
		return (-1);

	red = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (red == -1)
		return (-1);

	if (text_content)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			;
		write(red, text_content, len);
	}

	close(red);
	return (1);
}
