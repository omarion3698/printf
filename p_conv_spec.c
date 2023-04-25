#include "main.h"

/**
  * conv_specifier - handling the p coversion specifier
  * void - returns 0
  */
int conv_specifier_p(void)
{
	int num = 10;
	int *ptr = &num;
	printf("Address of num: %p\n", ptr);
	return (0);
}
