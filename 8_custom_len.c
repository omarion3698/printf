#include "main.h"

/**
  * 8_custom_len - handles the length modifiers for non-custom
  * conversion specifiers l, h
  *
  * Return: Always 0 (success)
  */

int 8_custom_len()
{
	int i = 1234;
	long l = 1234567890L;
	short s = 12;
	printf("i = %d\n", i);
	printf("l = %ld\n", l);
	printf("s = %hd\n", s);

	printf("i as long = %ld\n", (long)i);
	printf("s as long = %ld\n", (long)s);

	return 0;
}
