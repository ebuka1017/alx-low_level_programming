#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

/**
 * sum_them_all - returns the sum of all it's params
 *
 * @n: number oftimes to iterate
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...);

/**
 * print_numbers - prints numbers followed by a new line
 *
 * @separator: string to be printed between numbers
 *
 * @n: number of integers passed to function
 */

void print_numbers(const char *separator, const unsigned int n, ...);

/**
 * print_strings - prints strings followed by a new line
 *
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...);

/**
 * print_all - prints anything
 * @format: format string that tells arg types
 */

void print_all(const char * const format, ...);

int print_c(va_list a);
int print_i(va_list a);
int print_f(va_list a);
int print_s(va_list a);

/**
 * struct op - struct for 3
 * @c: char to check
 * @f: function to point to
 */
typedef struct op
{
	char *c;
	int (*f)(va_list a);
} printer;
#endif

