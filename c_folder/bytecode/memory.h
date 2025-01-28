#ifndef clox_memory_h
#define clox_memory_h

#include "common.h"

#define GROW_CAPACITY(capacity) \
    ((capacity) < 8 ? 8 : (capacity) * 2)
/*Note: On Macros
- This is a macro which is like shortcut or template for code. 
When the compiler processes the code, it replaces the macro 
with its defintion before compiling.
- Ternary Operator (? :) ==> Shortway of writing an if else statement
    condition ? value_if_true : value_if_false

      ((capacity) < 8 ? 8 : (capacity) * 2)
   So if capacity is less than 8 ==> return 8
  if capacity is not less than 8 ==> return (capacity*2) ==> eg: (8*2) == return 16
 
-  The \ at the end of the line in the macro definition is used 
to continue the macro definition onto the next line. In C, macros
 must be written as a single logical line, but using the 
 backslash (\) allows you to split the definition across multiple
physical lines for readability.
*/

#define GROW_ARRAY(type, pointer, oldCount, newCount) \
  (type*)reallocate((pointer), sizeof(type) * (oldCount), sizeof(type) * (newCount))

/*Note:
  - considers the data type ==> "type" {As this is an array it will only contain elements with the same data type only, if not a link list has to be used}
  - pointer to the beginning of the relavent array to be resized ==> "pointer"
  - calculated the old memory size as "sizeof(type * oldCount)" <== Comes from oldCapacity
  - calculate the new memory size as "sizeof(type * newCount)"<== Comes from GROW_CAPACITY macro
  - resize the memory block for tha array by taking into account the size of relavent data type in the array
  - casts the returned pointer from reallocate() to the correct type (type*)
*/
/*
Examples of this code in action:
1. Original array:
        int* array = NULL; // Start with no array
        int oldCount = 0; // Initially no elements (In the above code oldCount always starts with 8 bytes)
        int newCount = 10; // We want to allocate space for 10 elements
2. Grow the Array: Use GROW_ARRAY to allocate memory:
        array = GROW_ARRAY(int, array, oldCount, newCount);
    oldCount is 0, so the old memory size is sizeof(int) * 0 = 0
    newCount is 10, so the new memory size is sizeof(int) * 10
    reallocate(array, 0, sizeof(int) * 10) is called to allocate space for 10 integers
3. Later Resize: Increase space in the array
        oldCount = newCount;
        newCount = 20; // For desired count
        array = GROW_ARRAY(int, array, oldCount, newCount);
4. Freeing the array:
        array = GROW_ARRAY(int, array, newCount, 0);   
    newCount is 0, so the reallocate() function frees the memory and return NULL 
*/
#define FREE_ARRAY(type, pointer, oldCount)\
  reallocate(pointer, sizeof(type) * (oldCount), 0)


void* reallocate(void* pointer, size_t oldSize, size_t newSize);

#endif