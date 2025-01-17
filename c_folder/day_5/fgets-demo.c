#include <stdio.h>
#include <stdlib.h>

int main(int argc, char*argv[]){

    char firstname[20];
    char lastname[20];
    char age[3];

    printf(" Please state your firstname lastname and age: ");
    fgets(firstname,20,stdin);
    fgets(lastname,20,stdin);
    fgets(age,3,stdin);

    printf("First: %sLast: %sAge: %d\n",firstname,lastname,atoi(age));
    return 0;
}