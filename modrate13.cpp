#include <stdio.h>

int main() {
    int m, n, i, j;
    int array[100][100];
    int sum = 0;

    printf("Enter the number of rows in the matrix: ");
    scanf("%d", &m);
    printf("Enter the number of columns in the matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix: \n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &array[i][j]);
            sum += array[i][j];
        }
    }

    float avg = (float)sum / (m * n);

    printf("Sum of the elements in the matrix: %d\n", sum);
    printf("Average of the elements in the matrix: %.2f\n", avg);

    return 0;
}
