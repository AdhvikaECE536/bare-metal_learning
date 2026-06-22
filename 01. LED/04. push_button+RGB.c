#include<avr/io.h>
#include<avr/iom8.h>

int main(){
    DDRC |= (1<< DDC5);
    DDRC |= (1<< DDC4);
    DDRC |= (1<< DDC3);
// can write as DDRC |= (7 << DDC3);

    while (1) {
        if (PIND & (1 << PIND1)){
            PORTC |= (1<< DDC3);
        }
        else 
            PORTC = 0;
    }
        
        

return 0;

}
