#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adding positive integer
 * @argc: arguments count
 * @argv: arguments line
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
int m, l, sum = 0;
for (m = 1 ; m < argc ; m++)
{
for (l = 0 ; argv[m][l] != '\0' ; l++)
{
if (!isdigit(argv[m][l]))
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[m]);
}
printf("%d\n", sum);
return (0);
}
