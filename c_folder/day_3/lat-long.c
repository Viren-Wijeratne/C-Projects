#include <stdio.h>
void go_south_east(int *lat, int *lon){
    *lat = *lat - 1; 
    /*Right side *lat take the value stores at &lat and substract 1. 
     Then with the left side *lat we reassign the resulting value to *lat 
     which is at the &lat location in memory.*/
    *lon = *lon + 1; 
    printf("This is lat: %p\n", lat);
      /*So if we look into the variable lat it will be storing 
        the memory address of latitude which is in hexadecimal.
        In order to access the value stored at that location *lat should be used*/
}
int main(){
    int latitude = 32;
    int longitude = -64;

    go_south_east(&latitude, &longitude);
    /*Here the int *lat = &latitude; occurs when the arguments are passed into the function*/
    printf("Avast! Now at: [%i, %i]\n", latitude, longitude);
    return 0;
}