#include "main.h"
/**
 * _printuint - Prints an unsigned integer in decimal format
 * @n: The unsigned integer to print
 *
 * Return: The number of characters printed
 */

int _printuint(unsigned int n)
{
	if (n / 10)
		return (_printuint(n / 10) + _putchar((n % 10) + '0'));
	return (_putchar(n % 10 + '0'));
}

/**
 * _printoct - Prints an unsigned integer in octal format
 * @n: The unsigned integer to print
 *
 * Return: The number of characters printed
 */
int _printoct(unsigned int n)
{
	if (n / 8)
		return (_printoct(n / 8) + _putchar((n % 8) + '0'));
	return (_putchar(n % 8 + '0'));
}

/**
 * _printhex - Prints an unsigned integer in hexadecimal format
 * @n: The unsigned integer to print
 * @uppercase: A flag to print uppercase letters if set to 1
 *
 * Return: The number of characters printed
 */
int _printhex(unsigned int n, int uppercase)
{
	if (n / 16)
		return (_printhex(n / 16, uppercase) +_putchar((n % 16 > 9) ? (n % 16 - 10 + (uppercase ? 'A' : 'a')) : (n % 16 + '0')));
	return (_putchar(n % 16 > 9 ? (n % 16 - 10 + (uppercase ? 'A' : 'a')) : (n % 16 + '0')));
}

/**
 * _printhex_helper - Helper function for _printhex that handles
 *                     zero padding and minimum width
 * @n: The unsigned integer to print
 * @width: The minimum width of the output
 * @uppercase: A flag to print uppercase letters if set to 1
 * @padder: A flag to indicate whether to pad with zeros or spaces
 *
 * Return: The number of characters printed
 */

int _printhex_helper(unsigned int n, int width, int uppercase, int padder)
{
	int len = 0;

	if (n / 16)
		len += _printhex_helper(n / 16, width - 1, uppercase, padder);
	else
		while (--width > 0)
			len += _putchar(padder ? '0' : ' ');
	return (len + _putchar((n % 16 > 9) ? (n % 16 - 10 + (uppercase ? 'A' : 'a')) : (n % 16 + '0')));
}
