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


#endif

