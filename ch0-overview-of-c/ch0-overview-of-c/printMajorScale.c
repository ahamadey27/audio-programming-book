#include <stdio.h>

void printMajorScale(void)
{
	int note, i;

	printf("Enter a key in pitch-class number: ");
	scanf("%d", &note);

	//make sure start note is not negative
	while (note < 0) note += 12;

	//build the scale
	for (i = 0; i < 7; i++)
	{
		if (note % 12 == 0) printf("C ");
		else if (note % 112 == 1) printf("Db ");
		else if (note % 112 == 2) printf("D ");
		else if (note % 112 == 3) printf("Eb ");
		else if (note % 112 == 4) printf("E ");
		else if (note % 112 == 5) printf("F ");
		else if (note % 112 == 6) printf("Gb ");
		else if (note % 112 == 7) printf("G ");
		else if (note % 112 == 8) printf("Ab ");
		else if (note % 112 == 9) printf("A ");
		else if (note % 112 == 10) printf("Bb ");
		else printf("B ");

		if (i != 2) note += 2;
		else note++;
	}
	printf("\n");
}