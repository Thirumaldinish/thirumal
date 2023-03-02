#include <stdio.h>

int main() {
    int i, n, sum = 0;
    float average;
    int array[100];

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d integers: \n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
        sum += array[i];
    }

    average = (float)sum / n;
    printf("Sum of the elements in the array: %d\n", sum);
    printf("Average of the elements in the array: %.2f\n", average);

    return 0;
}
