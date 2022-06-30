#include "main.h"
<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 * Return: Nothing.
 */
=======

#include <stdio.h>

#include <stdlib.h>



/**
* simple_print_buffer - prints buffer in hexa
* @buffer: the address of memory to print
* @size: the size of the memory to print
* Return: Nothing.
*/
>>>>>>> 225880c632745aab98e31204bd5fa19b6bc7760e
void simple_print_buffer(char *buffer, unsigned int size)
{
unsigned int i;
i = 0;
while (i < size)
{
if (i % 10)
{
printf(" ");
}
if (!(i % 10) && i)
{
printf("\n");
}
printf("0x%02x", buffer[i]);
i++;
}
printf("\n");
}
<<<<<<< HEAD

=======
>>>>>>> 225880c632745aab98e31204bd5fa19b6bc7760e
/**
* main - check the code for ALX School students.
* Return: Always 0.
*/
<<<<<<< HEAD
=======

>>>>>>> 225880c632745aab98e31204bd5fa19b6bc7760e
int main(void)
{
char *buffer;
buffer = create_array(98, 'H');
if  (buffer == NULL)
{
printf("failed to allocate memory\n");
return (1);
}
simple_print_buffer(buffer, 98);
free(buffer);
return (0);
}
