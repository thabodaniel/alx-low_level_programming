#ifndef MAIN_H
#define MAIN_H

/* _putchar */
int _putchar (char); 


/* take a pointer to an int parameter */
void reset_to_98(int *n);

/* swap the values */
void swap_int(int *a, int *b);

/* Return length of string */
int _strlen(char *s);

/* print a string followed by new line, to stdout */
void _puts(char *str);

/* print string in reverse */
void print_rev(char *s);

/* reverse a string */
void rev_string(char *s);

/* print every char of string starting with 1st letter */
void puts2(char *str);

/* print half of a string */
void puts_half(char *str);

/* print n elements of an array of integers */
void print_array(int *a, int n);

/* copy string pointed to by src, including the terminating null byte */
char *_strcpy(char *dest, char *src);

/* convert a string to integer */
int _atoi(char *s);
#endif
