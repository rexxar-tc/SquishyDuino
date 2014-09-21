//Original Squishy RGB LED Controller-Code written by Matthew Schmidt Bauer for the Squishy Circuits Project with Annmarie Thomas
//Rewritten for ATTiny25 SquishyDuino by Brant Martin & Chris Easton

//Port Definitions and Variable Declarations:
#define RED_LED 0
#define GREEN_LED 1
#define BLUE_LED 4
#define ANALOG_RED 1
#define ANALOG_GREEN 3
#define ANALOG_BLUE 0

void setup()
{
//Set LED pins to output
pinMode (RED_LED, OUTPUT);
pinMode (GREEN_LED, OUTPUT);
pinMode (BLUE_LED, OUTPUT);
}
void loop()
{ //Read Voltages over Dough:
int raw_RED   = analogRead( ANALOG_RED   );
int raw_GREEN = analogRead( ANALOG_GREEN );
int raw_BLUE  = analogRead( ANALOG_BLUE  );

//Store values in arrays
int raw[3] = { raw_RED, raw_GREEN, raw_BLUE };
int led[3] = { RED_LED, GREEN_LED, BLUE_LED };
int bri[3];

//Normalize ADC values
for ( int i=0; i<3; ++i )
{
    if ( raw[i] >= 500 )
    {
        bri[i] = 0;
    }
    else
    {
        if ( raw[i] <= 150 )
        {
            bri[i] = 2550;
        }
        else
        {
            bri[i] = 3644 - 7*raw[i];
        }
    }
    //Divide final value and write it to LED
    //Divide red value by 15, others by 10, to compensate for red LED's lower forward voltage
    analogWrite ( led[i], 255 - bri[i]/(i==0 ? 15 : 10 ) );
}

}
