#include <stdio.h>

int main (int argc, char* argv[]){

    char first_name[20];
    char last_name[20];
    int age;
    printf("Please enter your first-name last-name and age: ");
    scanf("%19s %19s %d", first_name, last_name, &age);
    printf("First: %s Last: %s Age: %d\n", first_name, last_name, age);

    return 0;
}