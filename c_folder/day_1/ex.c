#include <stdio.h>

int main(){
/*Assume name shorter than 20 charaters*/
char ex[20];
puts("Enter girlfriends' name: ");
scanf("%19s", ex);
printf("Dear %s.\n\n\tYou'r history.\n", ex);
return 0;
}
