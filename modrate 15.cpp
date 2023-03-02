#include <stdio.h>

int main() {
    int n, i;
    int array[100];
    int *ptr;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    ptr = array;
    printf("The elements of the array are: \n");
    for (i = 0; i < n; i++) {
        printf("%d ", *ptr);
        ptr++;
    }

    return 0;
}
