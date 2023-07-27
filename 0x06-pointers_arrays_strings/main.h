#ifndef MAIN_H
#define MAIN_H
/* _putchar */
int _putchar (char);

/* concatenate two strings */
char *_strcat(char *dest, char *src);

/* concatenate two strings */
char *_strncat(char *dest, char *src, int n);

/* copy a string */
char *_strncpy(char *dest, char *src, int n);

/* compare two strings */
int _strcmp(char *s1, char *s2);

/* reverse the content of an array of integers */
void reverse_array(int *a, int n);

/* chnage all lowercase letters of string to uppercase */
char *string_toupper(char *);


/* captalize all words of string */
char *cap_string(char *);

/* encode a string into 1337 */
char *leet(char *);
#endif
