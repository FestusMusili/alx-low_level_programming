#ifndef MAIN_H
#define MAIN_H

Char *_memset(char *s, char b, unsigned int n);
int _putchar(char c);
Char *_memcpy(char *dest, char *src, unsigned int n);
Char *_strchr(char *s, char c);
Unsigned int _strspn(char *s, char *accept);
Char *_strpbrk(char *s, char *accept);
Chr *strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);

#endif

