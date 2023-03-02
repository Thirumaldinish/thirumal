#include <stdio.h>
#include <stdlib.h>

struct subject {
  char name[20];
  int marks;
};

int main() {
  int n, i;
  
  printf("Enter the number of subjects: ");
  scanf("%d", &n);
  
  struct subject *ptr;
  ptr = (struct subject *) malloc(n * sizeof(struct subject));
  
  if (ptr == NULL) {
    printf("Memory allocation failed.\n");
    return 1;
  }
  
  printf("Enter the name and marks of each subject:\n");
  for (i = 0; i < n; i++) {
    scanf("%s%d", (ptr + i)->name, &(ptr + i)->marks);
  }
  
  printf("\nSubjects and marks:\n");
  for (i = 0; i < n; i++) {
    printf("%s\t%d\n", (ptr + i)->name, (ptr + i)->marks);
  }
  
  free(ptr);
  return 0;
}
