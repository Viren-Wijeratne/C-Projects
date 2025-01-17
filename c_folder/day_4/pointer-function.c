#include <stdio.h>

void increment(int *j){
    *j = *j + 1;
}

int main(int argc, char*argv[]){

int x = 3;
increment(&x);
printf("%d\n", x);

return 0;
}