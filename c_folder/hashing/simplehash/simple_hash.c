#include <stdio.h>
#define TABLE_SIZE 100

unsigned hash(char *v){
  int h;
  for(h=0; *v != '\0'; v++){
    h = (64*h + *v) % TABLE_SIZE;
  }return h;
}

int main(){
 char word[100]; // Declaring an array like this => char word[] = ""; would lead to stack smashing as it creates a string with only the \0 and there will be no room for the input leading to a stack overflow
printf("Write the word you want to hash: \n");
//scanf("%s", word);
fgets(word, sizeof(word), stdin);


  //char word[] = "cat";
  int hashResult = hash(word);
  printf("The hash is: %d\n", hashResult);

  return 0;
}