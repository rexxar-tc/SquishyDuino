##Hardware
==========

The hardware is very simple, but it does use small 0603 surface mount parts, so it will take at least a good temperature-controlled soldering iron to put together.

###Bill of Materials

This is a very short list:

- ATTiny25 in SO-8 package
- 4 470 ohm resistors in 0603 package
- 1 0.1-1 uf ceramic capacitor in 0603 package
- 1 Common-cathode RGB LED
- 1 L7805 5V regulator in SOT223 package
- 1 small mylar speaker
- 1 9V battery clip
- Several pieces of wire

I recommend [Mouser.com](http://mouser.com) or [Digikey.com](digikey.com) for sourcing these parts.

###PCB

I develop in DipTrace, so I've uploaded both the .dip and gerber files for you to make your own boards, and the boards are also available at [OSHPark](https://oshpark.com/shared_projects/uGJvATVW) ready to order. 

##Assembly

Assembly requires you be familiar with surface-mount soldering techniques. From there, it's pretty straightforward. Put the chip down, the capacitor in the spot next to the chip, then resistors everywhere else.

On the bottom side of the board is a place for a resistor, which is shorted out. If you're using the speaker on that board, leave it shorted, and if you're using the LED, cut the trace between the pads with a razor, then solder in the resistor. (this is used for current limiting on the LED, but is not desirable for the speaker)

If you're building the LED version, populate all resistors, and put the LED in its place. The LED I designed for has the pinout red-ground-blue-green. The ground pin is third over from the voltage regulator. You may want to use colored wires for the inputs for the individual colors. From left to right, the order is red, green, blue.

If you're building the buzzer version, the only resistor you need is on the middle set of input wires. The speaker needs to be connected to the two center pins in the top row, and the inpt wires are the two center pins on the bottom row.

Before assembly, make sure to read the Software documentation, as programming the chip is not entirely straightforward.
