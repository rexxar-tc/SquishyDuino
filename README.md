SquishyDuino
============
##About SquishyDuino

This project came about as part of a children's program at my public library with [Squishy Circuits](http://squishycircuitsstore.com). The hardware is as small and cheap as reasonably possible, and so far has survived abuse by groups of 30+ 8-10 year olds.

The code is adapted from code from St. Thomas University, who created Squishy Circuts. A good deal of rewriting was necessary to get the RGB program to fit into the ATTiny's 128B of RAM.

The ATTiny25 is not *oficially* supported by Arduino, but we used the [arduino-tiny](https://code.google.com/p/arduino-tiny/) core which worked pretty well.

Essentially, Squishy Circuits is a type of play-dough that has reasonably good conductivity. You can stick an ADC across a lump of dough, and the read voltage will change as the kids play with the dough. Here, we used the ADC values to vary the tone of a speaker, or the individual colors of an RGB LED.
