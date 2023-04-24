#include "main.h"

/**
  * print_char - Function to print a single character.
  * @args: Retrieve the next argument from the va_list.
  * Return: Call the _putchar function to write the character to stdout.
 */
int print_char(va_list args)
{
	  char c = va_arg(args, int);
	    return _putchar(c);
}

/**
  * print_string - Function to print a string
  * @args: Retrieve the next argument (a char pointer) from the va_list
  * Return: Return the number of characters printed
  */

int print_string(va_list args)
{
	char *str = va_arg(args, char*);
	int len = 0;
	if (str == NULL)
	{
		return write(1, "(null)", 6);
	}
	else
	{
		while (str[len])
		{
			_putchar(str[len]);
			len++;
		}
	}
	return len;
}

/**
  * print_number - Function to print a number
  * @args: Retrieve the next argument from the va_list and cast it to a long int
  * Return: Return the number of characters printed.
 */
int print_number(va_list args)
{
	long int number = va_arg(args, int);
	int counter = 0;

	if (number < 0)
	{
		number *= -1;
		_putchar(45);
		counter++;
	}
	if (number >= 0 && number <= 9)
	{
		_putchar(number + 48);
		counter++;
	}
	if (number > 9)
	{
		int base = 10;

		while (number / base > 9)
		{
			base *= 10;
		}
		while (base > 0)
		{
			int digit = number / base;
			number = number % base;
			_putchar(digit + 48);
			base /= 10;
			counter++;
		}
	}
		    return counter;
}

