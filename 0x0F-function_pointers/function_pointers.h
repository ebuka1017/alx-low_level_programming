#ifndef _FUNCTION_POINTERS_H_
#define _FUNCTION_POINTERS_H_

/**
 * _putchar - writes to stdo
 *
 * @c: character to compare
 *
 * Return: (1) or (0)
 */

int _putchar(char c);

/**
 * print_name - prints name
 *
 * @name: name to print
 * @f: function pointer
 *
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *));

#endif


