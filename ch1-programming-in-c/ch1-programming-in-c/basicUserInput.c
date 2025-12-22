#include <stdio.h>
#include "exercises.h"
#include <stdlib.h>

void userInputatof()
{
	char input[64];
	double dval;

	printf("Write a long decimal: ");
	scanf("%63s", input); //guarantees no buffer overflow (63 chars plus nth element '\0') and read as one word

	dval = atof(input); //Converts test to double

	printf("You entered; %.3f which has been reduced to three decimal places.", dval);

}