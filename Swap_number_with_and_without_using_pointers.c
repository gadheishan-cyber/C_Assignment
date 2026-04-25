#include <stdio.h>

void swap_without_pointer(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("After swapping without pointers:\n");
    printf("a = %d b = %d\n", a, b);
}

void swap_with_pointer(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("After swapping with pointers:\n");
    printf("x = %d y = %d\n", *x, *y);
}

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    swap_without_pointer(a, b);
    swap_with_pointer(&a, &b);

    return 0;
}
