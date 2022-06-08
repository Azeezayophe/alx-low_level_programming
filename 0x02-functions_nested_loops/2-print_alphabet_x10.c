#include "main.h"
/**
* print_alphabet - print alphabets in lowercase
*
* Return: Always 0 (Success)
*/
void print_alphabet(void)
{
int alp;
int i = 1;
while (i <= 10)
{
for (alp = 97 ; alp <= 122 ; alp++)
{
_putchar(alp);
}
i++;
_putchar('\n');
}
}
