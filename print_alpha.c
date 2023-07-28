#include "main.h"

/**
 * print_string - loops through a string and prints
 * every character
 * @list: va_list arguments from _printf
 * Return: number of char printed
 */
int print_string(va_list list)
{
	char *s = va_arg(list, char *);

	if (!s)
		s = "(null)";
	return (_puts(s));
}

/**
 * print_char - prints a character
 * @list: va_list arguments from _printf
 * Return: number of char printed
 */
int print_char(va_list list)
{
	_putchar(va_arg(l, int));
	return (1);
}
