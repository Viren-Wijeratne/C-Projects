#include <stdio.h>

int main(int argc, char* argv[]){
    printf("The nuber of arguments: %i\n", argc);

    for(int arg_idx = 0; arg_idx < argc; arg_idx++){
        printf("The correct value at the index %i: %s\n",arg_idx, argv[arg_idx]);
    }
    return 0;}