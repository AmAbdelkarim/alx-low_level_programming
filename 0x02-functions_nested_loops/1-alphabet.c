#include "main.h"

/**
 * print_alphaphet - Make the alpabet
 *
 * Return : void
 */

void print_alphabet(void)
{
	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
