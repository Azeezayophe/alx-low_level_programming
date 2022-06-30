#ifndef _MAIN_H
#define _MAIN_H

int _putchar(char c);
char *create_array(unsigned int size, char c);
int **alloc_grid(int width, int height);
char *str_concat(char *s1, char *s2);
char *_strdup(char *str);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);







#endif
