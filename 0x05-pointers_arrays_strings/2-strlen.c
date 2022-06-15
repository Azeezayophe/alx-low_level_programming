#include"main.h"
/**
* _strlen - give the length of a string
* @s: the length
* Return: the length of a string
*/
int _strlen(char *s)
{
int i;
for (i = 1 ; s[i] != '\0' ; i++)
;
return (i);
}
