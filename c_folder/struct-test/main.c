#include <stdio.h>
  struct preferences {
    const char* food;
    float exercise_hours;
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
void label(struct fish f){
printf("Name:%s\nSpecies:%s\n%i years old, %i teeth\n", f.name, f.species, f.age, f.teeth);
}

int main(){

struct fish snappy = {"Snappy", "Piranha", 69, 4, {"Meat", 7.5}}; 
        printf("%s\n", snappy.name);
        catalog(snappy);
        label(snappy);
        printf("The prefered food is %s and should be fed every %f hours\n", snappy.care.food, snappy.care.exercise_hours);
  return 0;
}