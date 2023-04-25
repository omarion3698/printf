#include "main.h"

/**
  * _printf - function that produces output as a format
  * @format: parameter
  * Return: returns the number of characters printed.
  */
int _printf(const char *format, ...)
{
	int len = 0, i = 0;
	va_list args;

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;

			switch (format[i])
			{
				case 'c':
					len += _putchar(va_arg(args, int));
					break;
				case 's':
					len += _printstr(va_arg(args, char *));
					break;
				case '%':
					len += _putchar('%');
					break;
				case 'd':
				case 'i':
					len += _printint(va_arg(args, int));
					break;
			}
		}
		else
		{
			len += _putchar(format[i]);
		}
	i++;
	}
	va_end(args);
	return (len);
}
