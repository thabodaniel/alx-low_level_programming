#ifndef MAIN_H
#define MAIN_H
 
/* _putchar */
int _putchar (char); 


/* print a string */
void _puts_recursion(char *s);

/* print a string in reverse */
void _print_rev_recursion(char *s);

/* return the length of string */
int _strlen_recursion(char *s);

/* return the fatorial of any given number */
int factorial(int n);

/* return the value of x raised to the power of y */
int _pow_recursion(int x, int y);

/* return the natural square root of a number */
int _sqrt_recursion(int n);

/* return if the input int is a prime else return 0 */
int is_prime_number(int n);

/* retunr 1 of a string if palindrome and if not */
int is_palindrome(char *s);

/**
  *compare two strings and return 1 if the strings can be considered
  *identical, otherwise return 0
  */
int wildcmp(char *s1, char *s2);

#endif
