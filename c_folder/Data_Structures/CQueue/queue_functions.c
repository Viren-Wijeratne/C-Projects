#include "queue_functions.h"


Queue *create_queue(){
  Queue *queue = malloc(sizeof(Queue)); //Dynamically allocating memory for the new queue
  queue->head = NULL;
  queue->tail = NULL;
  queue->size = 0;
  return queue;
}


int size(Queue *queue){
  return queue->size;
}


bool is_empty(Queue *queue){
  return (queue->size == 0); // This return is used by peek() and enqueue() dequeue() as a flag
}

int peek(Queue *queue, bool *status){
  if(is_empty(queue)){
    *status = false;
  }else{
  *status = true;
  return queue->head->value;}
}


void enqueue(Queue *queue, int value){
  Node *newNode = malloc(sizeof(Node)); //Allocate memory for the newly created node.

  newNode->value = value; //Assigning the value from the enqueue function to the the newly formed node
  newNode->next = NULL; // Set as the tail of the queue

  if(is_empty(queue)){ //This is beacuse when the queue is empty head = tail
    queue->head = newNode; //In this case the newNode will be both head and tail of the queue, as it is the only node present in the queue
    queue->tail = newNode;
  }else{
  queue->tail->next = newNode; // Linking the old tail to the newly created tail node
  queue->tail = newNode; // Assigning the newly created node as the new tail of the whole queue
}
queue->size++; //increments size by 1 to show that the queue has grown
}

int dequeue(Queue *queue, bool *status){
  if(is_empty(queue)){
    *status = false;
    return 0; //Incase if the queue is empty
  }
  *status = true;
  int value = queue->head->value; //Saves the value of the node which is about to be removed from the front of the queue in the variable "value" before we remove it.

Node *oldHead = queue->head;// Saves the pointer to the head of the node to be removed. This should be done before changing the the head pointer to the new head
  if(queue->size == 1){// For the special case of deleting only 1 element present in the queue
    queue->head = NULL;
    queue->tail = NULL;
  }
  else {
    queue->head = queue->head->next; //Assigning the new head before removal of the previous head (which is in the front of the queue)
  }
  free(oldHead);
  queue->size--;
    return value;
}

void destroy_queue(Queue *queue){
  Node *currentNode = queue->head; //Store pointer to the cuurent node (which is going to be removed)
  while(currentNode != NULL){ //Iterate through all nodes until NULL which will be the end of the queue
    Node *temp = currentNode;//As the code just below will reassign currentNode we will lose track of the node that needs to be freed. It is saved in this pointer variable
    currentNode = currentNode->next; //Updating current node to next inline node
    free(temp); //Free the node which was then replaced by the above code. We didnt do this earlier as we couldn't assign the next nodes pointer to currentNode if it was freed first.
  }

  free(queue); //Delete the queue struct itself
}