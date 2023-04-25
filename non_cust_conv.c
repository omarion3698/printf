#include "main.h"

/**
  * custom_conv - demonstrates the use of the flag characters
  * @void: returns nothing
  */

int custom_conv(void)
{
	int num = 10;
	double d_num = 3.14159;

	printf("Using the + flag: %+d\n", num);
	printf("Using the space flag: % d\n", num);
	printf("Using the # flag with octal: %#o\n", num);
	printf("Using the # flag with lowercase hexadecimal: %#x\n", num);
	printf("Using the # flag with uppercase hexadecimal: %#X\n", num);
	printf("Using the # flag with floating-point: %#.4f\n", d_num);

	return 0;
}

