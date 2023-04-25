#include "main.h"

/**
 * _printf - prints characters.
 * @format: argument passed
 * Return: null bytes printed.
 */
int _printf(const char *format, ...)
{
	va_list list;
	unsigned int i = 0, characters_number = 0;

	if (!format)
		return (-1);

	va_start(list, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);

			else if (format[i + 1] == '%')
			{
				_putchar('%');
				characters_number++;
				i++;
			}
			else if (get_func(format[i + 1]) != NULL)
			{
				characters_number += (get_func(format[i + 1]))(list);
				i++;
			}
			else
			{
				_putchar(format[i]);
				characters_number++;
			}
		}
		else
		{
			_putchar(format[i]);
			characters_number++;
		}
	}
	va_end(list);
	return (characters_number);
}

/**
 * get_func - pointer function and its the entry point
 * @a: character passed through as an argument
 * Return: 0.
 */
int (*get_func(const char a))(va_list)
{
	print_f printf[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_number},
		{'i', print_number},
		{'\0', NULL}
	};

	int k;

	for (k = 0; printf[k].p != '\0'; k++)
	{
		if (printf[k].p == a)
		{
			return (printf[k].func);
		}
	}

	return (0);
}
