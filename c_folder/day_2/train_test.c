#include <stdio.h>

int main(){

int train = 65;
int winnings = 10;

    switch(train){
        case 37:
            winnings = winnings + 50;
            break;
        case 65:
            puts("Jackpot!");
            winnings = winnings + 80;
        case 12:
            winnings = winnings + 20;
            break;
        default:
            winnings = 0;
    }
    printf("The train value is %d, and your winnings are %d\n", train, winnings);
    return 0;
}