#include <stdio.h>

int main(int argc,char* argv[]){
    int contestant[] = {1,2,3};
    int *choice =  contestant;
    contestant[0] = 2;
    contestant [1];
    contestant [2] = *choice;
    printf("I'm going to pick contestant number %i\n", contestant[2]);
    return 0;
}