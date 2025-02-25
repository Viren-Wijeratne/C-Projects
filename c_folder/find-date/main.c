#include <stdio.h>
#include <string.h>

int NUM_ADS = 7;
char *ADS[] = {
 "William: SBM GSOH likes sports, TV, dining",
 "Matt: SWM NS likes art, movies, theater",
 "Luis: SLM ND likes books, theater, art",
 "Mike: DWM DS likes trucks, sports and bieber",
 "Peter: SAM likes chess, working out and art",
 "Josh: SJM likes sports, movies and theater",
 "Jed: DBM likes theater, books and dining"
};

// char *x;  This is a pointer to a string or also called a charater array. Declaration
// int *numb;  This is a pointer to an array of numbers. Declaration


int sport_no_bieber(char *ad){ //"sport_no_bieber" is a pointer name to a the function in memory. Function pointer
  return strstr(ad, "sports") && !strstr(ad, "bieber");
}

void find(){
  int i;
  puts("Search results:");
  puts("----------------------------------------------");
/*
  for(i=0; i < NUM_ADS; i++){
    if(strstr(ADS[i], "sports") && ! strstr(ADS[i], "bieber")){
      printf("%s\n", ADS[i]);
    }
  }*/

  for(i=0; i < NUM_ADS; i++){
    if(sport_no_bieber(ADS[i])){
      printf("%s\n", ADS[i]);
    }
  }

  puts("----------------------------------------------");
}

int main(){
  find();
  return 0;
}