//Make a website using C to code HTML
//    ./webby -t -h -o paragraph

#include <stdio.h>
#include <unistd.h>

int main(int argc, char* argv[]){

  char ch;
  char *title = "";
  char *heading = "";
  char *para = "";
  char *output = "";
  int count = 0;

  while((ch = getopt(argc, argv, "t:h:o:")) != EOF){
    switch(ch){
      case 't':
        title = optarg;
        break;
      case 'h':
        heading = optarg;
        break;
      case 'o':
        output = optarg;
        break;
      default:
        fprintf(stderr, "Unknown input '%s', use -t for title and -h for heading\n", optarg);
        return 1;
    }
  }
  
  argc -= optind;
  argv += optind;

FILE *file = fopen(output,"w");
if( file == NULL ){
  fprintf(stderr, "Could not create file\n");
  return 1;
}

  fprintf(file, "<html>\n");
  fprintf(file, "<head>\n");
  fprintf(file, "<title>%s</title>\n", title);
  fprintf(file, "</head>\n");
  fprintf(file, "<body>\n");
  fprintf(file, "<h1>%s</h1>\n", heading);
  fprintf(file, "<p>\n");
    for(count = 0; count < argc; count++){
      fprintf(file, "%s ",argv[count]);
    }
  fprintf(file, "</p>\n");
  fprintf(file, "</body>\n");
  fprintf(file, "</html>\n");
  fclose(file);
  printf("HTML file %s was generated\n", output);
  return 0;
}