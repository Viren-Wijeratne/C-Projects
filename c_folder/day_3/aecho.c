#include <stdio.h>
/*
1. Take command and argument
2. Filter out the command
*/
int main(int argc, char* argv[]){
    for(int i = 1; i < argc; i++)
    {printf("%s ",argv[i]);}
    printf("\n");
    return 0;
}
// This programme has a trailing end 