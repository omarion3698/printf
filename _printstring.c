#include "main.h"

/**
 * _printstr - Prints a string to stdout.
 * @str: The string to print.
 * Return: The length of the string.
 */
int _printstr(char *str)
{
	int i, len = 0;

	if (!str)
		str = "(null)";

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
		len++;
	}
	return (len);
}
