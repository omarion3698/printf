#include "main.h"

/**
 * _printbin - prints binary
 * @n: unsigned int
 * Return: number of character printed
 */

int _printbin(unsigned int n)
{
	int len = 0;

	if (n / 2)
		len += _printbin(n / 2);

	_putchar(n % 2 + '0');
	len++;
	return (len);
}
