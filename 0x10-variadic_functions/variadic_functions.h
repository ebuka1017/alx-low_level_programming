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

#endif

