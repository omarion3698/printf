#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <limits.h>
#include <unistd.h>

int _putchar(char c);
int _printf(const char *format, ...);
int _printchar(char c);
int _printstr(char *str);
int _printint(int n);
int _printbin(unsigned int n);
int _printuint(unsigned int n);
int _printoct(unsigned int n);
int _printhex(unsigned int n, int uppercase);
int _printhex_helper(unsigned int n, int width, int uppercase, int padder);
int conv_specifier_p(void);

#endif
