#include <stdio.h>
#include "exercises.h"

int main()
{
	//midi2freq();
	//sizeOf();
	//pGround();

	//userInputatof();
	//midiToFreqInteractive();

	/* Example: call cpsMidi as if the program were invoked with a command-line
	   argument. Change "60" to any MIDI note (0-127) or set up a different
	   argv before calling. This lets you run the function from within
	   Visual Studio without supplying command-line args. */
	char *args[] = { "cpsmidi", "60" };
	int result = cpsMidi(2, args);

	return result;
}					