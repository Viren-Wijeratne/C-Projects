Properties of a stack
- There are multiple methods to implement a stack using underlying dara structures such as linked lists and dynamic arrays as examples
- This example is using a dynamically allocated array
- Stack follows the last in-first (LIFO) out logic

Operations of the stack:
- Check if a stack is empty
- Check if a stack has reached maximum capacity
- Peek at the top stack item
- Create or destroy stack

Operating the stack:
- First the capacity of the stack is determined by the user.
- Available; commands => function fulfilled
      1) create_stack() => Capacity of the new stack
      2) destroy_stack() => Release memory allocated to the stack in the heap
      3) push() => Add items to the top of the stack
      4) pop() => Remove the lastly added item to the stack
      5) peek() => View the lastly added item to the stack
      6) read_stack() => View the stack items from top to bottom
      7) is_full() => Bool for checking if stack is full
      8) is_empty() => Bool for checking if stack is empty