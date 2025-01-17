#include <stdio.h>

int y = 1;
int main(){
    int x = 4;
    printf("This is the memory location of x: %p\n", &x);
     printf("This is the memory location of y: %p\n", &y);
    return 0;
}