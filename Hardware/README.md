##Hardware
==========

The hardware is very simple, but it does use small 0603 surface mount parts, so it will take at least a good temperature-controlled soldering iron to put together.

###Bill of Materials

This is a very short list:

- ATTiny25 in SO-8 package
- 4 470 ohm resistors in 0603 package
- 1 0.1-1 uf ceramic capacitor in 0603 package
- 1 Common-cathode RGB LED (pinout red-gnd-green-blue)
- 1 L7805 5V regulator in SOT223 package
- 1 small mylar speaker
- 1 9V battery clip
- Several pieces of wire

I recommend [Mouser.com](http://mouser.com) or [Digikey.com](digikey.com) for sourcing these parts.

###PCB

I've uploaded both the gerbers and DipTrace files for the PCB, and it's also available at [OSHPark](https://oshpark.com/shared_projects/uGJvATVW) ready to go. On the bottom side of the board is a place for a resistor, which is shorted out. If you're using the speaker on that board, leave it shorted, and if you're using the LED, cut the trace between the pads with a razor, then solder in the resistor. (this is used for current limiting on the LED, but is not desirable for the speaker)
