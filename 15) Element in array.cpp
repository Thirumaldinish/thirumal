#include <stdio.h>
int main() {
    int d[5];
    int *ptr;
    printf("enter elements: \n");
    for (ptr = d; ptr < d + 5; ++ptr)
        scanf("%d", ptr);
    printf("\nthe elements in array are: \n");
    for (ptr = d; ptr < d + 5; ++ptr)
        printf("%d\n", *ptr);
    return 0;
}
