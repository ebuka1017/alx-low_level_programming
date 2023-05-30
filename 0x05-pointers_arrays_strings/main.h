#ifndef _MAIN_H_ 
#define _MAIN_H_

/**
 * _putchar - writes to standard output
 *
 * @c: character to compare
 *
 * Return: 1 or 0
 */

int _putchar(char c);

/**
 * print_alphabet - func to print alphabet in lowercase
 */
void print_alphabet(void);

/**
 * print_alphabet_x10 - func to print lowercase alphabets 10x
 */

void print_alphabet_x10(void);

/**
 * _islower - function checking for a lowercase character
 *
 * Return: 1 if islower or 0
 */

int _islower(int c);

/**
 * _isalpha - checks if char is an alphabet
 *
 * Return: 1 if isalpha, 0 otherwise
 */

int _isalpha(int c);

/**
 * print_sign - func to print sign of a number
 *
 * Return: 1 if positive, -1 if negative, 0 if 0
 */

int print_sign(int n);

/**
 * _abs - computes absolute value of an int
 */

int _abs(int);

/**
 * print_last_digit - prints last digit of a number
 *
 *Return: value of last digit
 */

int print_last_digit(int n);

/**
 * jack_bauer - prints timer
 *
 */

int jack_bauer(void);

/**
 * times_table - prints the 9 times table
 */

void times_table(void);

/**
 * add - sums up two integers a & b
 *
 * Return: sum of two ints a,b
 */

int add(int, int);

/**
 * print_to_98 - counts from n to 98
 */

void print_to_98(int n);

/**
 * print_times_table - prints n times table
 */

void print_times_table(int n);

/**
 * reset_to_98 - takes pointer to an int as parameter and resets the value to 98
 */

void reset_to_98(int *n);

/**
 * swap_int - swaps values of two integers
 */

void swap_int(int *a, int *b);


/**
 * _strlen - returns string length
 */

int _strlen(char *s)i;

#endif

