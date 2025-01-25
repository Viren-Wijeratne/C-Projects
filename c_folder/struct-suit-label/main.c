#include <stdio.h>

typedef struct { 
  float tank_capacity;
  int tank_psi;
  const char *suit_material;
} equipment;

typedef struct scuba {
  const char *name;
  equipment kit;
} diver;

void badge(diver d){
  printf ("Name: %s | Tank: %2.2f(%i psi) | Suit: %s\n",
  d.name, d.kit.tank_capacity, d.kit.tank_psi, d.kit.suit_material);
}

int main(){
  //Dont have to write struct scuba randy = {} its is shortened to diver randy = {} by using typedef
  diver randy = {"Randy", {5.5, 3500, "Neoprene"}};
  badge(randy);
  return 0;
}

/* typedef is used to define a struct such that everytime it is called 
we dont have to write the whole "struct scuba diver" thing. Shortens the written code. 
The struct name and the alias can be the same as in example "equipment". 
Or it can be written as the seperately as in struct name = "scuba" and alias ="diver" */