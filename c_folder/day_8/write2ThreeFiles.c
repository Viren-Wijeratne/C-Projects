#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){

  char line[80];
  FILE *in = fopen("spooky.csv","r"); //Created a new data stream called "in" using spooky.csv file as a input alternatively to the more common user keyboard input
  FILE *file1 = fopen("ufos.csv","w"); //Created a new data straem called "file1" using ufo.csv file as the output for data traveling in the file1 data stream
  FILE *file2 = fopen("disapperences.csv","w"); // Created a new data stream called "file2" using dissapperences,csv as the output for data traveling in the file2 data stream
  FILE *file3 = fopen("others.csv","w"); //Created a new data stream called "file3" using others.csv as the output for the data traveling in the file3 data stream

  while(fscanf(in, "%79[^\n]\n", line) == 1)// fscanf(input_stream, type of data expected, location to save the recieved data)
  {if(strstr(line, "UFO")){
      fprintf(file1, "%s\n", line); //fprintf(output_stream, whatever the content to be outputed)
    }else if(strstr(line, "disapperences")){
      fprintf(file2, "%s\n", line);
    }else{
      fprintf(file3, "%s\n", line);
    }
  }
fclose(file1);//Closing the opened data streams
fclose (file2);
fclose (file3);

  return 0;
}