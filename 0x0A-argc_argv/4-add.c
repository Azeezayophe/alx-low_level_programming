#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
* main -add positive numbers
* @argc: int
* @argv: char *
* Return: always 0
*/
int main(int argc, char *argv[])
{
int i;
int sum = 0;
if (argc > 1)
{
for (i = 1; i <= (argc - 1); i++)
{
sum = sum + atoi(argv[i]);
}
printf("%d\n", sum);
}
if (argc == 1)
printf("0\n");
return (0);
}
