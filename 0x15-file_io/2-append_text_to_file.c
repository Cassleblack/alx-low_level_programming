#include "main.h"

/**
 * append_text_to_file - This is a C function
 * that will append text at the end of a given file.
 * @filename: This will be the file name.
 * @text_content: the contents in the file....
 *
 * Return: -1 if it's not successful, 1 if it is.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int red, len;

	if (!filename)
		return (-1);

	red = open(filename, O_WRONLY | O_APPEND);
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
