#include "stack_functions.h"

// Defining the functions of stack

Stack *create_stack(int capacity){
  if(capacity <= 0) capacity = 1; //Default stack capacity is 1

  Stack *stack = malloc(sizeof(Stack));
  if(!stack) return NULL;

  stack->collection = malloc(sizeof(int) * capacity);
  if (!stack->collection){
    free(stack);
    return NULL;
  }
  stack->capacity = capacity;
  stack->size = 0;
  return stack;
}

void destroy_stack(Stack *stack){
  free(stack->collection);
  free(stack);
}

void read_stack(Stack *stack){
  if(is_empty(stack) ) {
    printf("The the stack is empty! Nothing to read here.\n");
    return;
  }
  printf("Stack contains(top to bottom): \n");
 for(int i = stack->size -1; i >= 0; i--){ //This will read from the last added item to the first added item in order
  printf("%d\n", stack->collection[i]);
 }
}

bool is_full(Stack *stack){
  return stack->capacity == stack->size;
}

bool is_empty(Stack *stack){
  return stack->size == 0;
}

bool push(Stack *stack, int item){
  if(is_full(stack)){
    int new_capacity = stack->capacity * 2;
    int *new_collecation = realloc(stack->collection, new_capacity * sizeof(int));
    if(!new_collecation)return false;
    stack->collection = new_collecation;
    stack->capacity = new_capacity;
  }
stack->collection[stack->size] = item;
stack->size++;
  return true;
}

bool peek(Stack *stack, int *item){
  if(is_empty(stack)) return false;
  *item = stack->collection[stack->size - 1];
  return true;
}

bool pop(Stack *stack, int *item){
  if(is_empty(stack) ) return false;
  stack->size--; //We are just reducing the stack boundry such that the top most item will be present in memory but will no longer be refered to be within the stack
  *item = stack->collection[stack->size]; // Used to return what was recently removed
  return true;
}
