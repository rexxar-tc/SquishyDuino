//Squishy Sound - Code written by Sam Johnson and Modified by Matthew Schmidtbauer for the Squishy Circuits Project
//Adapted for ATTiny25 by Brant Martin & Chris Easton

//Port Definitions and Variable Declarations:
#define SpeakerOutput   1
#define ADC             A3; //Resistor connected from pin A3 to +5V

int raw = 0;                // Variable to store the raw input value
int frequency = 0;          // Variable to store Frequency

void setup(){}

void loop()
{
    raw = analogRead( ADC );            // Read Voltage over Dough
    frequency = raw*2;                  // Calculate Frequency
    tone( SpeakerOutput, frequency );   // Output Frequency to Sounding Device
}
