#ifndef _MAIN_H
#define _MAIN_H

int _putchar(char c);
char *create_array(unsigned int size, char c);
int **alloc_grid(int width, int height);
char *_strdup(char *str);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);








#endif
