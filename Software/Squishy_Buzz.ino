//Original Squishy Sound Code written by Sam Johnson and Modified by Matthew Schmidtbauer for the Squishy Circuits Project
//Rewritten for ATTiny25 SquishyDuino by Brant Martin

//Pin Definitions
#define ADC         3
#define Speaker     1

void setup(){}

void loop()
{
  int raw = 0;
  int frequency = 0;

  for( int i = 0; i < 5; i++)   //sum 5 readings
  {
    raw += analogRead(ADC);     //average measurement out over 10ms to keep the tone
    delay(2);                   //from fluctuating too much between each loop
  }

  if( raw < 200 )               //make sure value doesn't go out of bounds, this can crash the program
    raw = 200;

  else                          //if range is acceptable, divide by 5 to get average
    raw /= 5;

  frequency = raw / 2;          //divide by 2, to get a range between 100 and 512Hz, roughly A2 to B5
  tone( Speaker, frequency );   //play the tone on the speaker
  delay(20);                    //play tone for 20ms, the ATtiny requires this
}
