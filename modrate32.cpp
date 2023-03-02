#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 1000
#define MAX_LINES 100

int main() {
  char filename[20];
  FILE *fp;
  char buffer[MAX_LENGTH];
  char *lines[MAX_LINES];
  int line_count;
  
  printf("Enter the name of the file: ");
  scanf("%s", filename);
  
  fp = fopen(filename, "r");
  
  if (fp == NULL) {
    printf("Could not open file %s.\n", filename);
    return 1;
  }
  
  line_count = 0;
  
  while (fgets(buffer, MAX_LENGTH, fp) != NULL) {
    int buffer_len = strlen(buffer);
    
   
    lines[line_count] = (char *)malloc(buffer_len + 1);
    
   
    strcpy(lines[line_count], buffer);
    
    line_count++;
  }
  
  fclose(fp);
  
  printf("The contents of the file are:\n");
  
  for (int i = 0; i < line_count; i++) {
    printf("%s", lines[i]);
  }
  
  
  for (int i = 0; i < line_count; i++) {
    free(lines[i]);
  }
  
  return 0;
}
