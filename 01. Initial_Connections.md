The connections are always done using the pinout of AtMega328p mapped to Arduino pins

<img width="609" height="407" alt="image" src="https://github.com/user-attachments/assets/53c6b271-f566-4e81-bea8-dda0c2c7c6ca" />



Since we would be uploading our program to Arduino (I used Nano), initial steps are to make the connections for the communication between arduino and AtMega.

The ATmega8 uses SPI protocol to receive programming data.

Important connections for this are-

1. SCK (Clock):
  The arduino pulses this to create a timing beat — both chips sync to it so data isn't missed.
2. MOSI (Master Out Slave In):
  This is how the arduino sends compiled code to the ATmega8.
3. MISO (Master In Slave Out):
  This is how the ATmega8 talks back to the arduino. It confirms data was received correctly.
4. RESET:
  The arduino pulls this LOW to tell the ATmega8 "enter programming mode". Without this, the chip just runs normally and ignores programming commands.
5. VCC + GND:
  The ATmega8 needs power to operate.


| Arduino Nano | ATmega8 Physical Pin |
|---|---|
| D13 (SCK) | Pin 19 (PB5) |
| D12 (MISO) | Pin 18 (PB4) |
| D11 (MOSI) | Pin 17 (PB3) |
| D10 (RESET) | Pin 1 (PC6/RESET) |
| 5V | Pin 7 (VCC) **and** Pin 20 (AVCC) |
| GND | Pin 8 (GND) **and** Pin 22 (GND) |
