#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node{
  int value;
  struct Node *next;
} Node;

typedef struct{
  Node *head;
  Node *tail;
  int size;
}Queue;

Queue *create_queue();
int size(Queue *queue);
bool is_empty(Queue *queue);
int peek(Queue *queue, bool *status);
void enqueue(Queue *queue, int value);
int dequeue(Queue *queue, bool *status);
void destroy_queue(Queue *queue);
