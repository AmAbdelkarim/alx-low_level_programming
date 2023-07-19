#include <stdio.h>

/**
*_putchar -writes the character c to stdout
*@c: the character to print
*
* reture: on sucess 1:
* on error, -1 is returned, and erro is set appropiertly
*/
int _putchar(char c)
{
    return (write(1, &c,1);
}
