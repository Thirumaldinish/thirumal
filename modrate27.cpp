#include <stdio.h>

int main() {
  char filename[20];
  char buffer;
  FILE *fp;
  
  printf("Enter the name of the file: ");
  scanf("%s", filename);
  
  fp = fopen(filename, "r");
  
  if (fp == NULL) {
    printf("Could not open file.\n");
    return 1;
  }
  
  printf("ASCII values of characters in the file:\n");
  while ((buffer = fgetc(fp)) != EOF) {
    printf("%d ", buffer);
  }
  
  fclose(fp);
  
  return 0;
}

