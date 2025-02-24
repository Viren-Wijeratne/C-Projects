#include <stdio.h>
#include  <stdlib.h>
#include <string.h>

typedef struct island{
  char *name;
  char *opens;
  char *closes;
  struct island *next; //In a recursive structure pointer to the dame type should always be included, that is why "struct island" is used eventhough there is typedef
} island;

island* create(char *name){
  island *i = malloc(sizeof(island));
  i -> name = strdup(name);// Copies the array data into a new array in the heap and returns a pointer to the new array created in the heap. This is needed as if some struct uses the same array for input, if it the struct takes a pointer to the array when the array is changed the data in the already created struct will be changed as well
  i -> opens = "09:00";
  i -> closes = "17:00";
  i -> next = NULL;
  return i;
}

void release(island *start){
  island *i = start;
  island *next = NULL;
  for(; i != NULL; i = next){
    next = i->next; // Set next to point to the next island
    free(i->name); // Free name string created by strdup()
    free(i); // Then free the island struct
  }
}

void display(island *start){
  island *i = start;
  for(; i != NULL ; i = i -> next){ //i = i -> next;    assigns next nodes address location to i, i->next; same as (*i).next;
    printf("Name: %s open: %s - %s\n", i -> name, i -> opens, i -> closes);
  }
}

int main(){
  island *start = NULL;
  island *i = NULL;
  island *next = NULL;
  char name[80];
  for(; fgets(name, 80, stdin) != NULL; i = next){ // We run the loop until no more "island" names are provided by the user as fgets returns NULL when there is no input. Here we copy the pointer to the old node to pointer variable "i"
    next = create(name); // Pointer to the newly created node is assigned to next
    if(start == NULL) start = next; // This code is applicble only for the creation of the first node of the linked list
    if(i != NULL) i->next  = next; // This is done to connect the previous node "i" to the newly created node "next"
  }

  display(start); // Passing &amitty will point to the starting node for the "for" loop which will iterate through each node until it finds NULL at the last node.
  release(start);
  return 0;
}

/*Notes:
Linked list differ from arrays as they allow to insert new pieces of data inbetweem already existing data. But this is quite
difficult in arrays as they are fixed size so either the last element needs to be removed or a new array with appropirate length
should again be loaded into memory. Linked list allow us to do this dynamically without much trouble
*/