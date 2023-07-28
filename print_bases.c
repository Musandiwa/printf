#include "main.h"

/**
 * print_hex - prints a number in hexadecimal base,
 * in lowercase
 * @list: va_list arguments from _printf
 * Description: the function calls convert() which in turns converts the input
 * number into the correct base and returns it as a string
 * Return: the number of char printed
 */
int print_hex(va_list list)
{
	unsigned int num = va_arg(list, unsigned int);
	char *str = convert(num, 17, 1);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
		count += _puts("0x");
	count += _puts(str);
	return (count);
}

/**
 * print_hex_upper - prints a number in hexadecimal base,
 * in uppercase
 * @list: va_list arguments from _printf
 * Description: the function calls convert() which in turns converts the input
 * number into the correct base and returns it as a string
 * Return: the number of char printed
 */
int print_hex_upper(va_list list)
{
	unsigned int num = va_arg(list, unsigned int);
	char *str = convert(num, 17, 0);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
		count += _puts("0X");
	count += _puts(str);
	return (count);
}

/**
 * print_binary - prints a number in base 2
 * @list: va_list arguments from _printf
 * Description: the function calls convert() which in turns converts the input
 * number into the correct base and returns it as a string
 * Return: the number of char printed
 */
int print_binary(va_list list)
{
	unsigned int num = va_arg(list, unsigned int);
	char *str = convert(num, 2, 0);

	return (_puts(str));
}

/**
 * print_octal - prints a number in base 8
 * @list: va_list arguments from _printf
 * Description: the function calls convert() which in turns converts the input
 * number into the correct base and returns it as a string
 * Return: the number of char printed
 */
int print_octal(va_list list)
{
	unsigned int num = va_arg(list, unsigned int);
	char *str = convert(num, 8, 0);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
		count += _putchar('0');
	count += _puts(str);
	return (count);
}
