#include <stdio.h>

struct student {
  char name[20];
  int age;
};

void displayDetails(struct student s) {
  printf("Name: %s\nAge: %d\n", s.name, s.age);
}

int main() {
  struct student s1, s2;
  
  printf("Enter the details of student 1:\n");
  printf("Name: ");
  scanf("%s", s1.name);
  printf("Age: ");
  scanf("%d", &s1.age);
  
  printf("Enter the details of student 2:\n");
  printf("Name: ");
  scanf("%s", s2.name);
  printf("Age: ");
  scanf("%d", &s2.age);
  
  printf("\nDetails of student 1:\n");
  displayDetails(s1);
  printf("\nDetails of student 2:\n");
  displayDetails(s2);
  
  return 0;
}
