#include <stdio.h>
#include <stddef.h>
#include "exercises.h"

void sizeOf(void)
{
	printf("Size of int: %zu bytes\n", sizeof(int)); 
	printf("Size of char: %zu bytes\n", sizeof(char));
	printf("Size of short: %zu bytes\n", sizeof(short));
	printf("Size of long: %zu bytes\n", sizeof(long));
	printf("Size of float: %zu bytes\n", sizeof(float));
	printf("Size of double: %zu bytes\n", sizeof(double));
}