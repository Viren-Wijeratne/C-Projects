#ifndef clox_chunk_h //Check if macro clox_chunk_h is not already defined | ifndef = if not defined
#define clox_chunk_h //Defines clox_chunk_h to ensure the content is included only once

#include "common.h"

typedef enum{
  OP_RETURN,
}OpCode;

typedef struct{
  int count;
  int capacity;
  uint8_t* code; // pointer to unit8_t is a pointer to 1byte of memory (or the start of an array of bytes)
} Chunk;

void initChunk(Chunk* chunk);
void freeChunk(Chunk* chunk);
void writeChunk(Chunk* chunk, uint8_t byte);

#endif //Marks the end of the conditional block