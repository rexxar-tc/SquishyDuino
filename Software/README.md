##Software
==========

Here's both the Arduino files and pre-compiled hex files ready for uploading. You will need some type of ISP programmer to upload the code. I use an Arduino Leonardo as a programmer. It's easiest to do this with the ATTiny on the board, with no other components.

The programming pins are

- RESET - 1
- MOSI  - 5
- MISO  - 6
- SCK   - 7

You also need to program the fuses to disable the reset line, as it's used as one of the ADC inputs.

Fuses should be set to

- Low      0xE2
- High	   0x77
- Extended 0xFF

If for some reason you need to reprogram, you'll have to remove the ATTiny and use high-voltage serial programming, which you'll need to figure out on your own.
