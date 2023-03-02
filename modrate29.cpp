#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 1000

int main() {
  char filename[20];
  FILE *fp_read, *fp_write;
  char buffer[MAX_LENGTH];
  int i, length;
  
  printf("Enter the name of the file to reverse: ");
  scanf("%s", filename);
  
  fp_read = fopen(filename, "r");
  
  if (fp_read == NULL) {
    printf("Could not open file %s for reading.\n", filename);
    return 1;
  }
  
  fp_write = fopen("reverse.txt", "w");
  
  if (fp_write == NULL) {
    printf("Could not open file reverse.txt for writing.\n");
    return 1;
  }
  
  while (fgets(buffer, MAX_LENGTH, fp_read) != NULL) {
    length = strlen(buffer);
    
    for (i = length - 1; i >= 0; i--) {
      fputc(buffer[i], fp_write);
    }
  }
  
  fclose(fp_read);
  fclose(fp_write);
  
  printf("File reversed and saved as reverse.txt\n");
  
  return 0;
}
