// push buttons: OUT to pin 11, 12, 13
// for 4 pin push button: GND through resistor, connected to the other side to OUT and parallel side to VCC
// for 3 pin pus button: VCC through resistor, GND and OUT direct to respective places
// RGB LED: cathode to GND and 3 Anodes to pin 26, 27, 28 using resistors 


#include<avr/io.h>
#include<avr/iom8.h>

int main(){
    DDRC |= (1 << DDC3) | (1 << DDC4) | (1 << DDC5);  //DDC3, DDC4, DDC5 as outputs
    DDRD &= ~((1 << DDD5) | (1 << DDD6) | (1 << DDD7)); // DDD5, DDD6, DDD7 as inputs


    int state;
    PORTC = 0;
    while (1) {
        
        state = 0;
        
        if (PIND & (1 << DDD7)) {
            state |= (1 << DDC5);

        }

        if (PIND & (1 << DDD6)) {
            state |= (1 << DDC4); 
        }

        if (PIND & (1 << DDD5)) {
            state |= (1 << DDC3); 
        }

        PORTC = state;
        PORTC &= ~((1 << DDC3) | (1 << DDC4) | (1 << DDC5));


        // if you use else-if, then the very first true condition that gets true for that cycle will get executed and overwrite rest of the conditions, throwing rest of the checklist away for that cycle
    }      


return 0;

}


