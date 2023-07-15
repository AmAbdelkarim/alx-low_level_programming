#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int lowercase = 'a';
	int uppercase = 'A';
	
	while (lowercase <= 'z')
	{putchar(lowercase);
	lowercase +=1;
	}
	while (uppercase <= 'z')
	{putchar(uppercase);
	uppercase +=1;
	}
	putchar('\n');
	return (0);
} 
