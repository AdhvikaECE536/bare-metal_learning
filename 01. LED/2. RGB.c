#include <avr/io.h> 
#include <avr/iom8.h> 

int main(){

  DDRC |= (1 << DDC5);
  DDRC |= (1 << DDC4);
  DDRC |= (1 << DDC3);
  long i;

  while(1){
  for (i= 0; i<10000; i++){
      PORTC = (1<<PINC5);
        }
 
  for (i= 0; i<100000; i++){
      PORTC = 0;
        }
    
  for (i= 0; i<10000; i++){
      PORTC = (1<<PINC4);
        }
 
  for (i= 0; i<100000; i++){
      PORTC = 0;
        }
    
  for (i= 0; i<10000; i++){
      PORTC = (1<<PINC3);
        }
 
  for (i= 0; i<100000; i++){
      PORTC = 0;
        }
  }

return 0;

}
