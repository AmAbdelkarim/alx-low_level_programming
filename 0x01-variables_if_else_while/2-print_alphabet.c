#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int lowercase = 'a';
	while (lowercase <= 'z')
	{putchar(lowercase);
	lowercase +=1;
	}
	putchar('\n');
	return (0);
} 
