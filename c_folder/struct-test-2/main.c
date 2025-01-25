#include <stdio.h>

  struct exercise {
    const char *description;
    float duration;
  };

  struct meal {
    const char *ingredients;
    float weight;
  };

  struct preferences {
    struct meal food;
    struct exercise exercise;
  };

  struct fish {
    const char* name;
    const char* species;
    int teeth;
    int age;
    struct preferences care;
  };

void catalog(struct fish f){
 printf("%s is a %s with %i teeth. He is %i\n", f.name, f.species, f.teeth, f.age);
}

void label(struct fish a){
printf("Name:%s\nSpecies:%s\n%i years old, %i teeth\n", a.name, a.species, a.age, a.teeth);
printf("Feed with %2.2f lbs of %s and allow to %s for %2.2f hours\n", 
a.care.food.weight, a.care.food.ingredients, a.care.exercise.description, a.care.exercise.duration);
}

int main(){

struct fish snappy = {  //{"Snappy", "Piranha", 69, 4, {{"meat", 0.2}, {"swim in jacuzzi", 7.5}}}; 
  .name = "Snappy",    //Data is presented using designated initializers. Its is the same as above line of code 
  .species = "Piranha",
  .age = 69,
  .teeth = 4,

  .care.food.ingredients = "meat",
  .care.food.weight = 0.2,
  .care.exercise.description = "swin in jacuzzi",
  .care.exercise.duration = 7.5 

};
   // printf("%s\n", snappy.name);
    catalog(snappy);
    label(snappy);
    printf("The prefered food is %s and should be fed every %2.2f hours\n", snappy.care.food.ingredients, snappy.care.exercise.duration);
  return 0;
}

/*Considering stores struct variables in memory, the snappy variable will be stored consecutivelt to each other taking into account memory 
for each individual data type (For char 1 bit, int 4...).  The corrensponding struct "prefernces" living within the main struct "snappy"
also is present consecutively after the last field "age" of snappy. As struct it self does not occupy space in memory without any variable 
declaration when accessing the mmemory address of "snappy" and "snappy.name" would have the same address in memory*/