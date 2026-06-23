// NONE PRESSED: flashes RGB
// BUTTON 1: flashes RGB quicker
// BUTTON 2: flashes white


// push buttons: OUT to pin 12, 13
// for 4 pin push button: GND through resistor, connected to the other side to OUT and parallel side to VCC
// for 3 pin pus button: VCC through resistor, GND and OUT direct to respective places
// RGB LED: cathode to GND and 3 Anodes to pin 26, 27, 28 using resistors 

#include<avr/io.h>
#include<avr/iom8.h>

void long_delay(long time);
void flash_rgb_fast();
void flash_rgb_slow();
void flash_white();

int main(){
    DDRC |= (1 << DDC3) | (1 << DDC4) | (1 << DDC5);  //DDC3, DDC4, DDC5 as outputs
    DDRD &= ~((1 << DDD6) | (1 << DDD7)); // DDD5, DDD6, DDD7 as inputs

    long i;
    PORTC = 0;

    while (1) {

                
        if (PIND & (1 << DDD7)) {
            flash_rgb_fast();

        }

        else if (PIND & (1 << DDD6)) {
            flash_white();
        }

        else {
            flash_rgb_slow();
        }
    
        PORTC &= ~((1 << DDC3) | (1 << DDC4) | (1 << DDC5));


    }


return 0;

}



void long_delay(long time){
    volatile long i;
    for (i=0; i<time; i++){
        for (i=0; i<time; i++){
        }
    }
}

void flash_rgb_fast(){
    PORTC = (1<<PINC5);
    long_delay(10000);

    PORTC = 0;
    long_delay(10000);

    PORTC = (1<<PINC4);
    long_delay(10000);

    PORTC = 0;
    long_delay(10000);

    PORTC = (1<<PINC3);
    long_delay(10000);

    PORTC = 0;
    long_delay(10000);
        
}


void flash_white(){
    PORTC = (7<<PINC3);
    long_delay(10000);

    PORTC = 0;
    long_delay(10000);

}

void flash_rgb_slow(){
    PORTC = (1<<PINC5);
    long_delay(100000);

    PORTC = 0;
    long_delay(100000);

    PORTC = (1<<PINC4);
    long_delay(100000);

    PORTC = 0;
    long_delay(100000);

    PORTC = (1<<PINC3);
    long_delay(100000);

    PORTC = 0;
    long_delay(100000);
}
