/* Listing 1.2 Calculate frequency to MIDI exercise*/
#include <stdio.h>
#include "exercises.h"
#include <math.h> //for pow() function

void midi2freq()
{
	double semitone_ratio;
	double c0; //for freq of MIDI note 0
	double c4; //freq of middle c
	double frequency; //which we want to find...
	int midiNote; //...given this note

	/*Calculate required numbers*/

	semitone_ratio = pow(2, 1.0 / 12.0); //2 raised to the power of 1/12th to find semitone ratio of approx 1.0594631
	c4 = 220.0 * pow(semitone_ratio, 3); // three semitones above low a of 220hz
	c0 = c4 * pow(semitone_ratio, 5); //5 octaves above c0

	double freq = 430.0; /* test value */
	double fracmidi = log(freq / c0) / log(semitone_ratio);  /* fractional MIDI */
	int midinote = (int)(fracmidi + 0.5);           /* nearest integer */

	printf("freq = %.2f Hz -> MIDI note %d (fractional %.3f)\n",
		freq, midinote, fracmidi);
}