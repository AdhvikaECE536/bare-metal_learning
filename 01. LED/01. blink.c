#include <avr/io.h> //master header file for AVR microcontrollers.
#include <avr/iom8.h> //explicitly includes the register definitions for AtMega8

int main(){
  //i want to use PC3. so it would mean Data Direction Register for Port C 'DDRC' is shifted to 3
  //by DDRC |= (1 << DDC3) (or) DDRC |= (1 << 3) (or) DDRC = 8
  // same with: PORTC = 8 (or) PORTC = (1<<PINC3) (or) PORTC = (1<<3)

  DDRC |= (1 << DDC3);
  long i;

  while(1){
  for (i= 0; i<10000; i++){
      PORTC = (1<<PINC3);
        }
 
  for (i= 0; i<10000; i++){
      PORTC = 0;
        }
  }

return 0;

}
