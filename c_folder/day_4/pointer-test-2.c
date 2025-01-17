#include <stdio.h>

int main(int argc, char*argv[]){
    char mystring[4] = "abc";
    printf("%s\n", mystring);
    printf("%c\n", mystring[0]);
    printf("%p\n", &mystring);
    printf("%p\n", &mystring[0]);
    printf("%p\n", &mystring[1]);
    printf("%p\n", &mystring[2]);
    printf("%p\n", &mystring[3]);
    printf("\n");

    char *mystring_2 = "def";
    printf("%s\n", mystring_2);
    printf("%p, %c\n", mystring_2, *mystring_2);
    printf("%p, %c\n", mystring_2 + 1, *(mystring_2 + 1)); 
    printf("%p, %c\n", mystring_2 + 2, *(mystring_2 + 2));
    printf("%p, %c\n", mystring_2 + 3, *(mystring_2 + 3));
    printf("\n");

    int i = 0;
    while(*(mystring_2 + i) != '\0'){
        printf("%c\n", *(mystring_2 + i));
        i++;
    }

    return 0;
}