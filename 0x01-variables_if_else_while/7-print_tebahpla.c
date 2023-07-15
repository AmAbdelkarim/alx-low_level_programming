#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int lowercase = 'z';
	while (lowercase >= 'a')
	{putchar(lowercase);
	lowercase -=1;
	}
	putchar('\n');
	return (0);
} 

