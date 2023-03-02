#include <stdio.h>
int main() {
    int numStudent, numStaff, numNonTeaching;
printf("Enter the number of student users: ");
    scanf("%d", &numStudent);
 printf("Enter the number of staff users: ");
    scanf("%d", &numStaff);
numNonTeaching = numStaff / 3;
 printf("The total number of users is: %d\n", numStudent + numStaff + numNonTeaching);
    printf("Number of student users: %d\n", numStudent);
    printf("Number of staff users: %d\n", numStaff);
    printf("Number of non-teaching staff users: %d\n", numNonTeaching);
 return 0;
}
