#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 1000

int main() {
  char source_filename[20];
  char dest_filename[20];
  FILE *fp_source, *fp_dest;
  char buffer[MAX_LENGTH];
  
  printf("Enter the name of the source file: ");
  scanf("%s", source_filename);
  
  fp_source = fopen(source_filename, "r");
  
  if (fp_source == NULL) {
    printf("Could not open source file %s.\n", source_filename);
    return 1;
  }
  
  printf("Enter the name of the destination file: ");
  scanf("%s", dest_filename);
  
  fp_dest = fopen(dest_filename, "w");
  
  if (fp_dest == NULL) {
    printf("Could not open destination file %s.\n", dest_filename);
    return 1;
  }
  
  while (fgets(buffer, MAX_LENGTH, fp_source) != NULL) {
    fputs(buffer, fp_dest);
  }
  
  fclose(fp_source);
  fclose(fp_dest);
  
  printf("File copied successfully.\n");
  
  return 0;
}
