#include "main.h"

void print_with_precision(const char* format, ...)
{
	va_list args;
	va_start(args, format);

	int precision = -1;
	char specifier = '\0';

	for (const char* p = format; *p != '\0'; ++p)
	{
		if (*p == '%')
		{
			++p;
			if (*p == '.')
			{
				++p;
				if (*p >= '0' && *p <= '9')
				{
					precision = 0;
					while (*p >= '0' && *p <= '9')
					{
						precision = precision * 10 + (*p - '0');
						++p;
					}
				}
			}
			specifier = *p;
		}
		else
		{
			putchar(*p);
			continue;
		}

		switch (specifier)
		{
			case 'd':
				{
					int value = va_arg(args, int);
					if (precision == -1)
					{
						printf("%d", value);
					}
					else
					{
						printf("%.*d", precision, value);
					}
					break;
				}
			case 'f':
				{
					double value = va_arg(args, double);

					if (precision == -1)
					{
						printf("%f", value);
					}
					else
					{
						printf("%.*f", precision, value);
					}
					break;
				}
			case 's':
				{
					char* value = va_arg(args, char*);

					if (precision == -1)
					{
						printf("%s", value);
					}
					else
					{
						printf("%.*s", precision, value);
					}
					break;
				}
			default:
				printf("Error: unsupported format specifier '%c'\n", specifier);
				return;
		}
	}
	va_end(args);
}
