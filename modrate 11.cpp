#include <stdio.h>

int main() {
    int m, n, i, j, sum = 0;
    int array[100][100];

    printf("Enter the number of rows in the matrix: ");
    scanf("%d", &m);
    printf("Enter the number of columns in the matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix: \n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    printf("Diagonal elements of the matrix are: \n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (i == j) {
                printf("%d\t", array[i][j]);
                sum += array[i][j];
            }
        }
    }

    printf("\nSum of the diagonal elements: %d\n", sum);

    return 0;
}
