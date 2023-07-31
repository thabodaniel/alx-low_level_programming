#ifndef MAIN_H
#define MAIN_H
/* _putchar */
int _putchar (char);

/* fill memory with a constant */
char *_memset(char *s, char b, unsigned int n);

/* copy memory area */
char *_memcpy(char *dest, char *src, unsigned int n);

/* locate a character in a string */
char *_strchr(char *s, char c);

/* get the length of a prefix substring */
unsigned int _strspn(char *s, char *accept);

/* search a string for any set of bytes */
char *_strpbrk(char *s, char *accept);

/* locate a substring */
char *_strstr(char *haystack, char *needle);

/* print a chessboard */
void print_chessboard(char (*a)[8]);

/* print the sum of the 2 diagnosis of a square matrix of integers */
void print_diagsums(int *a, int size);
#endif
