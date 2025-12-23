/*Convery MIDI note to freq, using command line argument*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int cpsMidi(int argc, char* argv[]) //arguments are argument count and argument vector w/ arrays

//Argument argc is the name of the prgram
//char* argv[] is the value that the user inputs
{
	double c5, c0, semitone_ratio;
	double freq;
	int midiNote;

	semitone_ratio = pow(2, 1.0 / 12);
	c5 = 220.0 * pow(semitone_ratio, 3);
	c0 = c5 * pow(0.5, 5);

	if (argc != 2)
	{
		printf("cpsmidi: converts MIDI note to freq.\n");
		printf("usage: cpdmidi MIDInote.\n");
		printf("range: 0 <= MIDInote <= 127 \n");
		return 1;
	}

	midiNote = atoi(argv[1]); //use to echo bad argument to user

	if (midiNote < 0)
	{
		printf("%s is a bad value.\n", argv[01]); //argv[1] is what the user originally typed to prevent user typing in irrlevlent characters 
		return 1;
	}

	if (midiNote > 127)
	{
		printf("%s is beyond the MIDI scope.\n", argv[01]);
		return 1;
	}

	freq = c0 * pow(semitone_ratio, midiNote);
	printf("freq of MIDI note %d = %f\n", midiNote, freq);
}