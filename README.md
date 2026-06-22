# bare-metal_learning

learning and programming on VS Code 

So, starting with: **WHAT IS BARE METAL PROGRAMMING?**

Bare metal programming is a low-level type of programming that works without an abstraction layer or operating system (OS) or any heavy software libraries getting in the way. 

It is often a better choioce because of the unrestricted, complete control we get get over a device. 

### Benefits of Bare Metal Programming

1. Optimal utilization of system resources
2. Can achieve deterministic and predictable performance
3. SImplifies the development process by eliminating need to navigate through layers of OS abstraction

---
### Notes

**Terminal Codes**

```bash
:: 1. Compile
avr-gcc -mmcu=atmega8 -Os -o output.elf try.c

:: 2. Convert to hex
avr-objcopy -O ihex output.elf output.hex

:: 3. Flash
avrdude -c arduino -p m8 -P COM3 -b 19200 -U flash:w:output.hex:i
```

**Differences**

|   |  |
| ------------- | ------------- |
| PORTC I= (1 << 3); | 00001000 |
| PORTC &= ~(1 << 3); | 11110111 | 
