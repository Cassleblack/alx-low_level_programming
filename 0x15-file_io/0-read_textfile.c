#include "main.h"

/**
 * read_textfile - This will be reading a text file
 * @filename: This is the file names
 * @letters: This literaly the amount of letters to be read by....
 *
 * Return: This returns the number of letters that was read or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int red, yel;
	size_t blu;
	char *mal = malloc((sizeof(char) * letters) + 1);

	if (!filename || letters <= 0)
		return (0);

	if (!mal)
		return (0);

	red = open(filename, O_RDONLY);
	if (red == -1)
		return (0);

	yel = read(red, mal, letters);
	if (yel == -1)
		return (0);
	mal[yel] = '\0';

	blu = write(STDOUT_FILENO, mal, yel);
	if (blu > letters)
		return (0);

	close(red);
	return (blu);
}
