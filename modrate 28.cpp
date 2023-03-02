#include <stdio.h>
#include <stdlib.h>

int main() {
  char filename[20];
  char command[50];
  
  printf("Enter the name of the file to delete: ");
  scanf("%s", filename);
  
  sprintf(command, "rm %s", filename);
  int result = system(command);
  
  if (result == 0) {
    printf("File %s deleted successfully.\n", filename);
  } else {
    printf("Error deleting file %s.\n", filename);
  }
  
  return 0;
}
