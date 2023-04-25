#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

/**
  * struct types - specifier structure for printf
  * @p: pointer to characteres specifiers
  * @func : function pointer to print fucntions
  */
typedef struct types
{
	char p;
	int (*func)(va_list);
} print_f;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list args);
int print_string(va_list args);
int (*get_func(const char a))(va_list);
int print_number(va_list args);

#endif
