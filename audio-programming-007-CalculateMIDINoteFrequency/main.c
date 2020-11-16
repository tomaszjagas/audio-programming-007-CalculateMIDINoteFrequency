/*************************************************
Description: Program calculate MIDI note frequency
**************************************************/

#include <stdio.h>
#include <math.h>

int main() {
	double semitoneRatio;
	double c0; // for frequency of MIDI note 0
	double c5; // for frequency of Middle C
	double frequency; // frequency which we want to find
	int midiNote;

	// calculate required numbers
	semitoneRatio = pow(2, 1 / 12.0); // approx. 1.0594

	// find Middle C, three semitones above low A
	c5 = 220.0 * pow(semitoneRatio, 3);

	// MIDI note 0 is C, 5 octaves below Middle C
	c0 = c5 * pow(0.5, 5);

	// calculate frequency for give MIDI note number
	midiNote = 73; // C# above A = 440
	frequency = c0 * pow(semitoneRatio, midiNote);

	printf("MIDI Note %d has frequency %.2f Hz\n", midiNote, frequency);

	return 0;
}