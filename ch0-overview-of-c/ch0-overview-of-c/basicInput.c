#include <stdio.h>

void basic_input(void)
{
	int a, b;
	printf("Please enter a numer: ");
	scanf("%d", &a);

	printf("Please enter a second: ");
	scanf("%d", &b);

	printf("%d + %d = %d", a, b, a + b);

}

