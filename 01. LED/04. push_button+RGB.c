// push buttons: VCC through resistors, GND direct and OUT to pin 11, 12, 13
// LED: cathode to GND and 3 Anodes to pin 26, 27, 28 using resistors 

#include<avr/io.h>
#include<avr/iom8.h>

int main(){
    DDRC |= (7 << DDC3); //DDC3, DDC4, DDC5 as outputs
    DDRD &= ~(7 << DDD5); // DDD5, DDD6, DDD7 as inputs
    
    long i;
    while (1) {
        if (PIND & (1 << PIND7)){
            PORTC = (1 << DDC5);
        }
        else if (PIND & (1 << PIND6)){
            PORTC = (1<< DDC4); // if you do  PORTC |= (1<< DDC4), it is not going to overwrite and mix the colors 
        }
        else if (PIND & (1 << PIND5)){
            PORTC = (1<< DDC3);
        }
        else
            PORTC =0;

    }
        
        

return 0;

}

