#include "main.h"

/**
  * _printint - prints the integers
  * @n: parameter that is declared as an integer
  * Return: the length
  */
int _printint(int n)
{
	unsigned int num = n;
	int len = 0;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
		len++;
	}

	if (num / 10)
	{
		len += _printint(num / 10);
	}
	_putchar(num % 10 + '0');
	len++;
	return (len);
}
