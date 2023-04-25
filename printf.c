#include "main.h"

/**
 * _printf - prints formatted output to stdout
 * @format: format string containing directives for printing
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	unsigned int i = 0, num_chars = 0;

	if (!format)
		return (-1);

	va_start(args, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			else if (format[i + 1] == '%')
			{
				_putchar('%');
				num_chars++;
				i++;
			}
			else if (get_func(format[i + 1]))
			{
				num_chars += get_func(format[i + 1])(args);
				i++;
			}
			else
			{
				_putchar(format[i]);
				num_chars++;
			}
		}
		else
		{
			_putchar(format[i]);
			num_chars++;
		}
		i++;
	}

	va_end(args);

	return (num_chars);
}

/**
 * get_func - returns a function pointer based on a format specifier
 * @c: the format specifier character
 *
 * Return: a function pointer to the appropriate printing function
 */
int (*get_func(char c))(va_list)
{
	print_fmt print_fmts[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_decimal},
		{'i', print_decimal},
		{'\0', NULL}
	};

	int i = 0;

	while (print_fmts[i].fmt)
	{
		if (print_fmts[i].fmt == c)
			return (print_fmts[i].func);
		i++;
	}

	return (NULL);
}
