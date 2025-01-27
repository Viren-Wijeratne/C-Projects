#include <stdio.h>

typedef struct island{
  char *name;
  char *opens;
  char *closes;
  struct island *next; //In a recursive structure pointer to the dame type should always be included, that is why "struct island" is used eventhough there is typedef
} island;

void display(island *start){
  island *i = start;
  for(; i != NULL ; i = i -> next){ //i = i -> next;    assigns next nodes address location to i, i->next; same as (*i).next;
    printf("Name: %s open: %s - %s\n", i -> name, i -> opens, i -> closes);
  }
}

int main(){

  island amity = {"Amity", "09:00", "17:00", NULL}; //NULL wiil set the pointer intially to 0, this is changed later
  island craggy = {"Craggy", "09:00", "17:00", NULL}; //Initializing nodes of the linked list
  island isla_nublar = {"Isla Nublar", "09:00", "17:00", NULL};
  island shutter = {"Shutter", "09:00", "17.00", NULL};

  amity.next = &craggy; // We are assigning the pointer to the next island struct in the linked list
  craggy.next = &isla_nublar; //This is were the linking happens. Earlier NULL was set to next such that it can be changed conviniently here
  isla_nublar.next = &shutter; // This will be changed later down the code

  island skull = {"Skull", "9:00", "17:00", NULL}; // Adding new node "skull" beteween isle_nublar and shutter nodes
  isla_nublar.next = &skull; //Rearranging the links
  skull.next = &shutter;

  display(&amity); //Passing &amitty will point to the starting node for the "for" loop which will iterate through each node until it finds NULL at the last node.

  return 0;
}

/*Notes:
Linked list differ from arrays as they allow to insert new pieces of data inbetweem already existing data. But this is quite
difficult in arrays as they are fixed size so either the last element needs to be removed or a new array with appropirate length
should again be loaded into memory. Linked list allow us to do this dynamically without much trouble
*/