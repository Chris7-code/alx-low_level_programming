#ifndef MAIN_H
#define MAIN_H

char *_mmeset(char *S, char b, unsigned int n);
char *memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char *ss, char *to);
int _putchar(char c);

#endif