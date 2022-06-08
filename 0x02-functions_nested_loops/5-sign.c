#include "unistd.h"
/**
 * print_sign - check numers
 * @n : number to check
 * Return:0 or 1
 */
int _putchar(int n)
{
int test;
if (n > 0)
{
test = 1;
_putchar('+');
}
else if (n == 0)
{
test = 0;
_putchar('0');
}
else
{
test = -1;
_putchar('-');
}
return (test);
}
