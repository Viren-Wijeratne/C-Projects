#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare_scores(const void* score_a, const void* score_b){
  int a = *(int*)score_a;
  int b = *(int*)score_b;
  return a - b;
} // This sort interger scores, with the smallest first

int compare_scores_desc(const void* score_a, const void* score_b){
  int a = *(int*)score_a;
  int b = *(int*)score_b;
  return b - a;
} // Sort interger scores with the largest first

typedef struct{
  int width; 
  int height;
}rectangle;

int compare_areas(const void* a, const void* b){
  rectangle *ra = (rectangle*)a;  //Convert pointer to correct type
  rectangle *rb = (rectangle*)b;  //Convert pointer to correct type
  int area_ra = (ra -> width * ra -> height); //Calculate the area of rectangle a
  int area_rb = (rb -> width * rb -> height); //Calculate the area of rectangle b 
  return area_ra - area_rb;
} // Sort the rectangles in area order smallest first

/* This code can also be used as above 
int compare_areas(const void* a, const void* b){
  rectangle ra = *(rectangle*)a;  //Convert pointer to correct type
  rectangle rb = *(rectangle*)b;  //Convert pointer to correct type
  int area_ra = (ra.width * ra.height); //Calculate the area of rectangle a
  int area_rb = (rb.width * rb.height); //Calculate the area of rectangle b 
  return area_ra - area_rb;
} // Sort the rectangles in area order smallest first

*/
int compare_names(const void* a, const void* b){
  char** sa = (char**)a;
  char** sb = (char**)b;
  return strcmp(*sa,*sb);
} // Sort a list of names in alphabetical order. Case sensitive

int compare_areas_desc(const void* a, const void* b){
  return compare_areas(b, a);
} // Sort the rectangles in area order largest first

int compare_names_desc(const void* a, const void* b){
  return compare_names(b, a);
}



int main(){
   int scores[] = {543,323,32,554,11,3,112};
   int i;
   qsort(scores, 7, sizeof(int), compare_scores_desc);
   puts("These are the scores in order:");
   for (i=0; i < 7; i++){
    printf("Score = %i\n", scores[i]);
   }

   char *names[] = {"Karen", "Mark", "Brett", "Molly"};
   qsort(names, 4, sizeof(char*), compare_names);
   puts("These are the names in order:");
   for(i = 0; i < 4; i++){
    printf("%s\n",names[i]);
   }


  return 0;
}