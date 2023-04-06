#include "main.h"

/**
 * _strlen_recursion - Returns the lenght of a string
 * @s: string to be measured.
 *
 * Return: the lenght of the string
 */
int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}
	return (longit);
}
