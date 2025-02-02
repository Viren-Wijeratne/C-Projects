#include "stack_functions.h"

int main (void){

  int stack_size;
  printf("What is the size of the stack you want to make: \n");
  scanf("%d", &stack_size);

  Stack *stack = create_stack(stack_size);
  if (stack == NULL){
    printf("Error creating stack.\n");
    return 1;
  }
   
    printf("Capacity of the current stack is: %d\n", stack->capacity);
 
  if (is_empty(stack)){
    printf("The stack is empty.\n");
  }

push(stack, 2);
push (stack, 9);
push (stack, 4);
push (stack, 7);
push (stack, 8);

if(is_full(stack)) printf("Stack is full.\n");
printf("Stack size: %d\n", stack -> size);

bool try_push = push(stack, 5);
if(try_push == false) printf("Push failed.\n");

int peek_val = 0;
peek(stack, &peek_val);
printf("Peek Val: %d\n", peek_val);

bool try_peek = peek(stack, &peek_val);
if(try_peek == false) printf("Peek Failed.\n");

read_stack(stack);

int pop_val = 0;
for (int i=0; i < 5; i++){
  pop(stack, &pop_val);
  printf("Popped value: %d\n", pop_val);
}
bool try_pop = pop(stack, &pop_val);
if (try_pop == false) printf("Pop Failed.\n");

destroy_stack(stack);

  return 0;
}