#include <stdio.h>

typedef union {
  float weight;
  int count;
} cupcake;

int main(){
  cupcake order = {2};
  printf("Cupcake quantity: %i\n", order.count); /*. Problem comes with the large output value because the internal bit 
  patterns of float (01000000 00000000 00000000 00000000) and int (00000000 00000000 00000000 00000010) are different, 
  this leads to a nonsensical value being printed*/
  /*Interpret as float: 2.0
    Interpret as int: 1073741824  */
  return 0;
}

/*A casting of the value to a float will convert the value succefully*/