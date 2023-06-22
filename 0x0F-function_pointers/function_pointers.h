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

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 *
 * @array: array to got through
 * @size: size of the array
 * @action: pointer to func to be used
 */

void array_iterator(int *array, size_t size, void (*action)(int));

#endif


