#include <stdio.h>

void factorial(int *n, int *fact) {
    int i;
    *fact = 1;
    for (i = 1; i <= *n; i++) {
        *fact = *fact * i;
    }
}

int main() {
    int n, fact;
    int *ptr1, *ptr2;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    ptr1 = &n;
    ptr2 = &fact;

    factorial(ptr1, ptr2);

    printf("The factorial of %d is %d\n", n, fact);

    return 0;
}
