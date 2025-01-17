#include <stdio.h>

int main(){

    int x = 1337;
    int *a = &x;
    printf("What is inside *a: %d\n", *a);
    printf("What is inside a: %p\n", a);
    printf("What is inside a: %ld\n", a);
    printf("\n");
    int *c = a;
    printf("What is inside a: %ld\n", a);
    printf("What is inside c: %ld\n", c);
    printf("\n");
    *a = 5;
    printf("What is inside *a: %ld\n", *a);
    printf("What is inside x: %d\n", x);
    printf("What is inside a: %ld\n", a);

    return 0;
}