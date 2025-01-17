/*
1. Ask for charater from user
2. Take that character, and shift by some amount
3. Print the text
*/
#include <stdio.h>

int main(){

int shift = 2;

char message[] = "Please input a letter from a to z: ";
printf("%s",message);

char input;
scanf("%c", &input);

/*Narrows the user input to a to z*/
if (input < 'a' || input > 'z'){
    printf("Please input a charater between a to z (lowercase)\n");
    return 1;
    }

/*Deals with result overflow*/
if (input + shift > 'z'){
    printf("Shift is too large to handle encoding of this charater. Shift is currently %d\n",shift);
    return 1;
}

char result = input + shift;
printf("%c\n",result);

    return 0;
}