#include <stdio.h>

int main(){
char suit;
printf("Please input a charater from C-D-H-S: ");
scanf(" %c", &suit);
switch(suit){
case 'C':
	puts("Clubs");
	break;
case 'D':
	puts("Diamond");
	break;
case 'H':
	puts("Hearts");
	break;
case 'S':
	puts("Shades");
	break;
default:
	puts("Choose a correct suit!");
}
return 0;
}
