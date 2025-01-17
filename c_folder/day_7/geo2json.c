#include <stdio.h>
 int main (){

  float latitude;
  float longitude;
  char info[80];
  
  int started = 0;

  puts("data=[");
  while (scanf("%f,%f,%79[^\n]",&latitude, &longitude, info)==3){ //scanf returns the number inputs
    //%79[^\n] says give me every character up to the end ofthe line
    if(started){
      printf(", \n"); // This just adds the comma at the end of each entry (lat..,long..,info..),
    }else {started = 1;}

    if((latitude < -90.0)|| (latitude > 90.0) ){
      //printf("Invalid latitude: %f", latitude);
      fprintf(stderr, "Invalid Latitude: %f\n", latitude);
      return 2;
    }
    if ((longitude < -180.0)||(longitude > 180.0)){
      //printf("Invalid Longitude: %f", longitude);
      fprintf(stderr, "Invalid Longitude: %f\n", longitude);
      return 2;
    }


    printf("(\"latitude\": %f, \"longitude\": %f, \"info\": \"%s\")",latitude, longitude, info);
  }
  puts("\n]");
  return 0;
 }