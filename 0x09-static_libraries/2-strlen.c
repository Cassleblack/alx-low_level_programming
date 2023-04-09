#include "main.h"

/**
 * _strlen - returns the lenght of a strring
 * @s: string
 * Return: lenght
 */
int_strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}
