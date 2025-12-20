#include <stdio.h> 

int main()
{
	int a, b, c;
	printf("\nPlease enter a number: ");
	scanf("%d", &a); //user input stored as variable a

	printf("\nPlease enter a second: ");
	scanf("%d", &b); //user input stored as variable b

	c = a+b;

	printf("%d + %d = %d \n", a, b, c);
	return 0;
}