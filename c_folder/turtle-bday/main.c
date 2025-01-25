#include <stdio.h>

typedef struct{
  const char *name;
  const char *species;
  int age;
} turtle;

/*void happy_bday(turtle *t){ 
  (*t).age = (*t).age + 1;
  printf("Happy Birthday %s! You are now %i years old\n", (*t).name, (*t).age);
}*/ //The below function does the exact same thing as this function. Written only to show different syntax

void happy_birthday(turtle *a){
  a->age = a->age +1; //same as (*a).age = (*a).age + 1
   printf("Happy Birthday %s! You are now %i years old\n", a->name, a->age);
}

int main(){
  turtle myrtle = {"Myterl", "Leatherback sea turtle\n", 99};
  happy_birthday(&myrtle);
  printf("%s's age is now %i\n", myrtle.name, myrtle.age);
  return 0;
}

/*// We are modifying the varrible using a pointer so it will change the values stored at that memory location or 
otherwise the varibale passed into the happy_bday() function will be a copy of the myrtle which will only be modified
within the variable but when the function ends in memory after execution the modifications will not transfer over to 
the main function*/