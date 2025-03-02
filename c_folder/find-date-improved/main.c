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

int sports_no_bieber(char *s){
  return strstr(s, "sports") && !strstr(s, "bieber");
}

int sports_or_workout(char *s){
  return strstr(s, "sports") || strstr (s, "working out");
}

int ns_theater(char *s){
  return strstr(s, "NS") && strstr(s, "theater");
}

int arts_theater_or_dining(char *s){
  return strstr(s, "arts") || strstr(s, "theater") || strstr(s, "dining");
}

void find(int(*match)(char*)){ //Here the new function data type is created "return_type (*function_pointer_name)(parameter types)" This is same as declaring a function pointer
  int i;
  puts("Search results:");
  puts("----------------------------------------------");
  for(i=0; i<NUM_ADS; i++){
    if(match(ADS[i])){
      printf("%s\n", ADS[i]);
    }
  }
  puts("----------------------------------------------");
}

int main(){
  find(sports_no_bieber);
  find(sports_or_workout);
  find(ns_theater);
  find(arts_theater_or_dining);
  return 0;
}


/*Note:
As we assign pointer variables to refered to stored variable locations in memory, we can assign function pointers to refer
to stored functions in memory. But when we declare a pointer variable we can give it a time during declaration but
when it comes to function pointers we cant do that as  the functions can input different data types and also return 
different data types. Therefore we use a more complex notation as follows,

              return_type (*function_pointer_name)(parameter types)
                eg: char** (*name_fn) (char *, int)

Here the pointer is only declared. So this is sort of a new data type to store the memory location of a specific function 
so afterwards we can assign the function or its memory address to this function pointer.

              name_fn = album_name or name_fn = &album_name

Here album_name is the function and its location is stored is name_fn
So here on out name_fn can be used similar to any variable pointer is used in our programs
              eg: char** results = name_fn("Sacha Distel", 1972);   <= Used similar to the function. But remember this is a pointer to a function not a function itself
*/

/*
    match(ADS[i]) == (*match)(ADS[i])
*/ 