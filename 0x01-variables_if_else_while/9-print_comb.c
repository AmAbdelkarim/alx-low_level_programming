#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
    int i = '0';
    while (i <= '9')
    {
        putchar (i);
        if (i != '9')
        {
            putchar (',');
            putchar (' ');
        }
        ++i;
    }
	putchar('\n');
	return (0);
} 

