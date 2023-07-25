#include "main.h"

/*
 * copies the string pointed to by src to dest
 *
 * @dest is  a string
 * @src is another string
 *
 * return return until dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;
	do
	{
		i++;
		dest[i] = src[i];
	}
	while (src[i] != '\0');
	return (dest);
}
