#include<avr/io.h>
#include<avr/iom8.h>

int main(){
    DDRC |= (1<< DDC3);


    while (1) {
        if (PIND & (1 << PIND1)){
            PORTC |= (1<< DDC3);
        }
        else 
            PORTC = 0;
    }
        
        

return 0;

}
