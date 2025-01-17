#include <stdio.h>
#include <string.h>

void print_reverse(char *s){
  size_t len = strlen(s); //strlen() does not consider \0 for the count
  char *t = s + len - 1;
  while(t >= s){
    printf("%c", *t);
    t = t - 1;
  }
  puts("");
}

int main(){
  char message[80];
  printf("What is the message: ");
  //scanf("%79s", message);
  //char myString[] = {"Hello World"};
  fgets(message,80,stdin);
  print_reverse(message);
  return 0;
}

/*Using scanf() only returns the first word typed as it is whitesape sensitive but fgets() is not*/
/*Any string within "" can be used with scanf() for the same effect*/