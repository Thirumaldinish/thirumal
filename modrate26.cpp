#include <stdio.h>

int main() {
  char filename1[20];
  char filename2[20];
  char mergeFile[20];
  char buffer[100];
  FILE *fp1;
  FILE *fp2;
  FILE *fp3;
  
  printf("Enter the name of the first file: ");
  scanf("%s", filename1);
  printf("Enter the name of the second file: ");
  scanf("%s", filename2);
  printf("Enter the name of the merged file: ");
  scanf("%s", mergeFile);
  
  fp1 = fopen(filename1, "r");
  fp2 = fopen(filename2, "r");
  fp3 = fopen(mergeFile, "w");
  
  if (fp1 == NULL || fp2 == NULL || fp3 == NULL) {
    printf("Could not open one of the files.\n");
    return 1;
  }
  
  while (fgets(buffer, 100, fp1) != NULL) {
    fputs(buffer, fp3);
  }
  
  while (fgets(buffer, 100, fp2) != NULL) {
    fputs(buffer, fp3);
  }
  
  fclose(fp1);
  fclose(fp2);
  fclose(fp3);
  printf("Files merged successfully.\n");
  
  return 0;
}
