// push buttons: VCC through resistors, GND direct and OUT to pin 11, 12, 13
// RGB LED: cathode to GND and 3 Anodes to pin 26, 27, 28 using resistors 
// ref for connections: https://www.oceanlabz.in/interface/?srsltid=AfmBOopI7RSeH60mo-YOa1OxatCUDGiT8zt9yAKHSaptv9EI8hnafnsV

#include<avr/io.h>
#include<avr/iom8.h>

int main(){
    DDRC |= (7 << DDC3); //DDC3, DDC4, DDC5 as outputs
    DDRD &= ~(7 << DDD5); // DDD5, DDD6, DDD7 as inputs

    int state;
    PORTC = 0;
    while (1) {
        state = 0;
        
        if (PIND & (1 << PIND7)){
            state |= (1 << DDC5);
        }
        if (PIND & (1 << PIND6)){
            state |= (1<< DDC4); 
        }
        if (PIND & (1 << PIND5)){
            state |= (1<< DDC3);
        }
        
        PORTC = state;

        // if you use else-if, then the very first true condition that gets true for that cycle will get executed and overwrite rest of the conditions, throwing rest of the checklist away for that cycle
    }    

return 0;

}

