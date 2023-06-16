#ifndef _MAIN_H_ 
#define _MAIN_H_


/**
 * _atoi - converts char to int
 */

int _atoi(char *s);

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

int _strlen(char *s);

/**
 * _puts - prints a string to standard output
 */

void _puts(char *str);

/**
 * print_rev - prints a string in reverse
 */

void print_rev(char *s);

/**
 * rev_string - reverses a string
 */

void rev_string(char *s);

/**
 * puts2 - prints every other character of a string, starting with the first character, followed by a new line.
 */

void puts2(char *str);

/**
 * puts_half - prints half of a string
 */

void puts_half(char *str);

/**
 * _strcat - concatenates two strings
 */

char *_strcat(char *dest, char *src);

/**
 * _strncat - concatenates two strings
 */

char *_strncat(char *dest, char *src, int n);

/**
 * _strncpy - copies string
 */

char *_strncpy(char *dest, char *src, int n);

/** 
 * _strcmp - compares two strings
 */

int _strcmp(char *s1, char *s2);

/**
 * _memset - fills the first n bytes of the memory area pointed to by s with the constant byte b
 */

char *_memset(char *s, char b, unsigned int n);

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 */

char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _strchr - locates a character in a string
 */

char *_strchr(char *s, char c);

/**
 * _strspn - gets the length of a prefix substring
 */

unsigned int _strspn(char *s, char *accept);

/**
 * _strpbrk - searches a string for any of a set of bytes.
 */

char *_strpbrk(char *s, char *accept);

/**
 * _strstr - locates a substring
 */

char *_strstr(char *haystack, char *needle);

/**
 * prints_chessboard - prints chessboard
 */

void print_chessboard(char (*a)[8]);

/**
 * print_diagsum - prints the sum of the two diagonals of a square matrix of integers.
 */

void print_diagsums(int *a, int size);

/**
 * _puts_recursion - priints a string
 */

void _puts_recursion(char *s);

/**
 * _print_rev_recursion - prints a string in reverse
 */

void _print_rev_recursion(char *s);

/**
 * _strlen_recursion - returns the length of a string
 */

int _strlen_recursion(char *s);

/**
 * factorial - returns the factorial of a given number
 */

int factorial(int n);

/**
 * _pow_recursion - returns the value of x raised to power y
 */

int _pow_recursion(int,int);

/**
 * _sqrt_recursion - returns natural square root of number
 */

int _sqrt_recursion(int n);

/**
 * is_prime_number - returns 1 if prime
 */

int is_prime_number(int n);

/**
 * create_array - creates an array of chars
 */

char *create_array(unsigned int size, char c);

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 */

char *_strdup(char *str);

/**
 * str-concat - concatenates two strings
 */

char *str_concat(char *s1, char *s2);

/**
 * alloc_grid - returns pointer to a 2d array of ints
 */
int **alloc_grid(int width, int height);

/**
 * free_grid - frees grid creatd by alloc_grid func
 */

void free_grid(int **grid, int height);

/**
 * malloc_checked - memory allocator
 */

void *malloc_checked(unsigned int b);

/**
 * string_nconcat - concatenates two strings
 */

char *string_nconcat(char *s1, char *s2, unsigned int n);

/**
 * _calloc - allocates memory for array using malloc
 */

void *_calloc(unsigned int nmemb, unsigned int size);

#endif

