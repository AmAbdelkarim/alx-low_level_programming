#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: string parameter input
 *
 * return: lenght of a string
 * return _strlen = sucess make return for the next
 */

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		++counter;
	return (counter);
}

