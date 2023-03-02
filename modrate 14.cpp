#include <stdio.h>

void addNumbers(int *a, int *b, int *sum) {
    *sum = *a + *b;
}

int main() {
    int a, b, sum;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    addNumbers(&a, &b, &sum);

    printf("Sum of %d and %d is %d\n", a, b, sum);

    return 0;
}
