##Hardware
==========

The hardware is very simple, but it does use small 0603 surface mount parts, so it will take at least a good temperature-controlled soldering iron to put together.

###Bill of Materials

This is a very short list:

- ATTiny25 in SO-8 package
- 1 1 uf ceramic capacitor in 0603 package
- 1 L7805 5V regulator in SOT223 package
- 1 9V battery clip
- Several pieces of wire

In addition, the LED version requires
- 4 470 ohm resistors in 0603 package
- 1 Common-cathode RGB LED

The buzzer version requires
- 1 small mylar speaker
- 1 220 and 1 470 ohm resistors
- 1 2n2222 NPN transistor in SOT-23 package

I recommend [Mouser.com](http://mouser.com) or [Digikey.com](digikey.com) for sourcing these parts.

###PCB

I develop in DipTrace, so I've uploaded both the .dip and gerber files for you to make your own boards, and the boards are also available at [OSHPark](https://oshpark.com/shared_projects/PD8c1KSo) ready to order. 

##Assembly

Assembly requires you be familiar with surface-mount soldering techniques.

The transistor is used as a crude amplifier for the buzzer version, and should not be placed for the LED version. There is a small trace bridging two of the pads of the transistor. If you're building the buzzer version, cut this trace with a razor. For the buzzer, you need to place a 220 ohm resistor in the spot above the transistor, and a 470 ohm resistor on the center placement on the input row. You only need to place wires on the center two pins of the input row, and the speaker goes on the center two pins on the output.

For the LED, leave the bridging trace alone, and don't populate the transistor, then place 470 ohm resistors everywhere else. The LED pinout should be red, ground, green, blue, from left to right. The input wires follow the same order.

Before assembly, make sure to read the Software documentation, as programming the chip is not entirely straightforward.
