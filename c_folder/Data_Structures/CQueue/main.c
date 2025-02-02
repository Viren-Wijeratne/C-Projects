#include "queue_functions.h"

int main(void){

Queue *queue = create_queue();
if(is_empty(queue)) printf("Queue is empty.\n");

enqueue(queue, 4);
if(!is_empty(queue)) printf("Queue is not empty.\n");

enqueue(queue, 5);
enqueue(queue, 6);

printf("Queue size: %d\n", size(queue));

bool status = false;
int value = 0;

value = peek(queue, &status);
if(status) printf("Peek successful: %d\n", value);

value = dequeue(queue, &status);
if(status) printf("Dequeue successful: %d\n", value);

value = peek(queue, &status);
if(status) printf("Peek successful: %d\n", value);

value = dequeue(queue, &status);
if(status) printf("Dequeue successful: %d\n", value);

value = peek(queue, &status);
if(status) printf("Peek successful: %d\n", value);

value = dequeue(queue, &status);
if(status) printf("Dequeue successful: %d\n", value);

value = peek(queue, &status);
if(!status) printf("Peek unsuccessful.\n");

value = dequeue(queue, &status);
if(!status) printf("Dequeue successful.\n");

destroy_queue(queue);

  return 0;
}
