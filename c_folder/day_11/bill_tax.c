#include <stdio.h>
#include "bill_tax.h" // Definition is saved in this header file saved locally in the dame directory as main program

//float add_with_tax(float f); Declaring the function for the compiler, so it knows to expect a function called add_with_tax() further down the code

int main(){

float val;
printf("Price of item: ");
while(scanf("%f", &val) == 1){
  printf("Total so far: %.2f\n", add_with_tax(val));
  printf("Price of item: ");
}
printf("\nFinal total: %.2f\n", total);
printf("Number of items: %hi\n", count);
  return 0;

}
