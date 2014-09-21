SquishyDuino
============

##About SquishyDuino

This project came about as part of a children's program at my public library with [Squishy Circuits](http://squishycircuitsstore.com). The hardware is as small and cheap as reasonably possible, and so far has survived abuse by groups of 30+ 8-10 year olds.

The code is inspired by code from St. Thomas University, who created Squishy Circuts. We had to completely re-write it for the ATtiny, but they still get credit for the idea.

The ATtiny25 is not *oficially* supported by Arduino, but we used the [arduino-tiny](https://code.google.com/p/arduino-tiny/) core which worked pretty well.

Essentially, Squishy Circuits is a type of play-dough that has reasonably good conductivity. You can stick an ADC across a lump of dough, and the read voltage will change as the kids play with the dough. Here, we used the ADC values to vary the tone of a speaker, or the individual colors of an RGB LED.

##Tindie Store

I just finished designing revision 2 of the SquishyDuino, so once I get new boards made, I'll put them up for sale on Tindie.

Rev2 addresses a problem I didn't expect in the original design; The ATtiny can't source much current, so the speaker was very, very quiet. I fixed that, and updated the code to make it sound better.

