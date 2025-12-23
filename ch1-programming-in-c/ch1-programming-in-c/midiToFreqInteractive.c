/* Listing 1.3 Calculate frequency to MIDI exercise but interactive! */
#include <stdio.h>
#include "exercises.h"
#include <math.h> //for pow() function
#include <stdlib.h>

void midiToFreqInteractive()
{
	double c5, c0, semitone_ratio, freq;
	int midiNote;
	char message[256];
	char* result; 

	semitone_ratio = pow(2, 1.0 / 12);
	c5 = 220.0 * pow(semitone_ratio, 3);
	c0 = c5 * pow(0.5, 5);

	printf("Enter MIDI Note 0 -127: ");
	result = gets(message); 

	if (result == NULL)
	{
		printf("There was an error processing your input.\n");
		return 1; //something went wrong
	}

	if (message[0] == '\0')
	{
		printf("Have a nice day.\n");
		return 1;
	}

	midiNote = atoi(message);

	if (midiNote < 0)
	{
		printf("%s is a bad midi note number\n", message);
		return 1;
	}

	if (midiNote > 127)
	{
		printf("%s is beyond the midi range.\n", message);
		return 1;
	}

	int i;

	//detects floating point
	for (i = 0; message[i] != '\0'; i++)
	{
		if (message[i] == '.')
		{
			printf("%s is a floating number\n", message);
			return 1; 
		}
	}



	freq = c0 * pow(semitone_ratio, midiNote);
	printf("frequency of midi note %d = %.2f\n", midiNote, freq);

	return 0;
}