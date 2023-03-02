#include <stdio.h>

int sumArray(int *array, int size) {
    int i;
    int sum = 0;
    int *ptr;

    ptr = array;
    for (i = 0; i < size; i++) {
        sum += *ptr;
        ptr++;
    }

    return sum;
}

int main() {
    int size, i;
    int array[100];
    int sum;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array: \n");
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    sum = sumArray(array, size);

    printf("The sum of all elements in the array is: %d\n", sum);

    return 0;
}
