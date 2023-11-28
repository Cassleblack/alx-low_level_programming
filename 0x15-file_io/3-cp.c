#include "main.h"



/**
 * exitandRead - This will exit the code with a certain status.
 * @andstatus: This is the status the code will exit with.
 * @av: An array (the arguments vectors).
 * @andfileNo: the file is numbered with this.
 *
 * Return: Null.
 */
void exitndRead(int andstatus, char *av[], int andfileNo)
{
	dprintf(STDERR_FILENO, "Error: Can't read from %s\n", av[andfileNo]);
	exit(andstatus);
}

/**
 * exitandWrite - This will exit the code with a certain status.
 * @andstatus: This is the status the code will exit with.
 * @av: An array (the arguments vectors).
 * @andfileNo: the file is numbered with this.
 *
 * Return: Null.
 */
void exitandWrite(int andstatus, char *av[], int andfileNo)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[andfileNo]);
	exit(andstatus);
}


/**
 * main -  This program will copy a file from one file to another file.
 * @ac: (argument count).
 * @av: An array (the arguments vectors).
 *
 * Return: 0 if succesful
 */
int main(int ac, char *av[])
{
	int pic, tic, yel, ind, vio;
	char mal[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	pic = open(av[1], O_RDONLY);
	if (pic == -1)
		exitandRead(98, av, 1);

	tic = open(av[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (tic == -1)
		exitandWrite(99, av, 2);

	while ((yel = read(pic, mal, 1024)))
	{
		if (yel == -1)
			exitandRead(98, av, 1);
		if ((write(tic, mal, yel)) == -1)
			exitandWrite(99, av, 2);
	}
	ind = close(pic);
	vio = close(tic);
	if (ind)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", pic);
		exit(100);
	}
	if (vio)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d\n", pic);
		exit(100);
	}
	return (0);
}
