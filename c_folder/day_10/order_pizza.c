#include <stdio.h>
#include <unistd.h>

int main(int argc, char* argv[]){

char *delivery = "";
int thick = 0;
int count = 0;
char ch;

while((ch=getopt(argc, argv, "d:t")) != EOF){
  switch (ch){
    case 'd':
      delivery = optarg; // optarg is a building variable that stores the arguments passed into the specific option "d"
      break;
    case 't':
      thick = 1;
      break;
    default:
      fprintf(stderr, "Unknown option: '%s'\n", optarg);
    return 1;
  }
 
}
      argc -= optind; /*optind is a global variable modified by getopt. After processing options, you should update argc and argv once, outside the while loop. In your code, you're modifying argc and argv inside the loop, which causes issues.*/
      argv += optind; // These two lines help to move our argv counter infront such that argv[0] starts jumping ahead of the option and there relavent arguments. So in this programm argv[0] will be the first ingredient entered as an argument.

if(thick){
  puts("Thick crust.");
}
if(delivery[0]){
  printf("To be delivered %s. \n", delivery);
}
puts("Ingredients:");

for(count = 0; count < argc; count++){
  puts(argv[count]);
}


  return 0;
}