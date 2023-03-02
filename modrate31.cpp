#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 1000

int main() {
  char filename[20];
  FILE *fp;
  char buffer[MAX_LENGTH];
  int word_count, line_count;
  
  printf("Enter the name of the file: ");
  scanf("%s", filename);
  
  fp = fopen(filename, "r");
  
  if (fp == NULL) {
    printf("Could not open file %s.\n", filename);
    return 1;
  }
  
  word_count = 0;
  line_count = 0;
  
  while (fgets(buffer, MAX_LENGTH, fp) != NULL) {
    int in_word = 0;
    
    line_count++;
    
    for (int i = 0; buffer[i] != '\0'; i++) {
      if (buffer[i] == ' ' || buffer[i] == '\n') {
        in_word = 0;
      } else if (!in_word) {
        in_word = 1;
        word_count++;
      }
    }
  }
  
  fclose(fp);
  
  printf("Number of lines: %d\n", line_count);
  printf("Number of words: %d\n", word_count);
  
  return 0;
}
