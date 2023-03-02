#include <stdio.h>

int main() {
    int n, i;
    int array[100];

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d integers: \n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    int max = array[0];
    int min = array[0];
    for (i = 1; i < n; i++) {
        if (array[i] > max) {
            max = array[i];
        }
        if (array[i] < min) {
            min = array[i];
        }
    }

    printf("Maximum value in the array: %d\n", max);
    printf("Minimum value in the array: %d\n", min);

    return 0;
}
