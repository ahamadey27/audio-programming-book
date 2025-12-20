#include <stdio.h>

int main()
{
	int a, b;
	printf("Please enter a numer: ");
	scanf("%d", &a);

	printf("Please enter a second: ");
	scanf("%d", &b);

	printf("%d + %d = %d", a, b, a+b);

	return 0;
}