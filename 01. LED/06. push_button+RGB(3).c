// NONE PRESSED: flashes RGB
// BUTTON 1: flashes RGB quicker
// BUTTON 2: flashes white


// push buttons: OUT to pin 12, 13
// for 4 pin push button: GND through resistor, connected to the other side to OUT and parallel side to VCC
// for 3 pin pus button: VCC through resistor, GND and OUT direct to respective places
// RGB LED: cathode to GND and 3 Anodes to pin 26, 27, 28 using resistors 

#include<avr/io.h>
#include<avr/iom8.h>

int main(){
    DDRC |= (1 << DDC3) | (1 << DDC4) | (1 << DDC5);  //DDC3, DDC4, DDC5 as outputs
    DDRD &= ~((1 << DDD6) | (1 << DDD7)); // DDD5, DDD6, DDD7 as inputs



    PORTC = 0;
    long i;

    while (1) {

                
        if (PIND & (1 << DDD7)) {
            for (i= 0; i<10000; i++){
                 PORTC = (1<<PINC5);
            }
 
            for (i= 0; i<10000; i++){
                 PORTC = 0;
            }
    
            for (i= 0; i<10000; i++){
                 PORTC = (1<<PINC4);
            }
 
            for (i= 0; i<10000; i++){
                 PORTC = 0;
            }
    
            for (i= 0; i<10000; i++){
                 PORTC = (1<<PINC3);
            }
 
            for (i= 0; i<10000; i++){
                 PORTC = 0;
            }

        }

        else if (PIND & (1 << DDD6)) {
            for (i= 0; i<100000; i++){
                 PORTC = (7<<PINC3);
            }
 
            for (i= 0; i<100000; i++){
                 PORTC = 0;
            }
        }

        else {
            
        for (i= 0; i<100000; i++){
            for (i= 0; i<100000; i++){
                 PORTC = (1<<PINC5);
            }
        }
 
        for (i= 0; i<100000; i++){
            for (i= 0; i<100000; i++){
                 PORTC = 0;
            }
        }
    
        for (i= 0; i<100000; i++){
            for (i= 0; i<100000; i++){
                 PORTC = (1<<PINC4);
            }
        }
 
        for (i= 0; i<100000; i++){
            for (i= 0; i<100000; i++){
                 PORTC = 0;
            }
        }
    
        for (i= 0; i<100000; i++){
            for (i= 0; i<100000; i++){
                 PORTC = (1<<PINC3);
            }
        }
 
        for (i= 0; i<100000; i++){
            for (i= 0; i<100000; i++){
                 PORTC = 0;
            }
        }
        }
    

        


        PORTC &= ~((1 << DDC3) | (1 << DDC4) | (1 << DDC5));


    }


return 0;

}
