#include <stdio.h>

int main(int argc, char*argv[]){
    char cards[] = "JQK";
    char a_card = cards[2];
    cards[2] = cards[1];
    cards[1] = cards[0];
    cards[0] = cards[2];
    cards[2] = cards[1];
    puts(cards);
return 0;
}