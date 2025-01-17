#include <stdio.h>

int main(){
  float latitude;
  float longitude;
  char info[80];
    
    while(scanf("%f,%f,%79[^\n]", &latitude, &longitude, info) == 3)
      if((latitude > 40) && (latitude < 45))
        if((longitude > -75) && (longitude < -65))
        printf("%f,%f,%s\n", latitude, longitude, info);
  return 0;
}