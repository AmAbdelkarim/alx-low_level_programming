#include "main.h"

/**
 * _isalpha
 * @c:
 * Return:
 */

int _isalpha(int c)
{
	if ((c >= 65 && c<=97) || (c >=97 && c <=122))
	{
		return (1);
	}
	return (0);
}
