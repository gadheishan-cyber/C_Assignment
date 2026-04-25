#include <stdio.h>

int main() {
    int binary, decimal = 0, base = 1, digit;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    while (binary > 0) {
        digit = binary % 10;          // get last digit
        decimal += digit * base;      // add to decimal
        base *= 2;                   // update base (2^position)
        binary /= 10;                // remove last digit
    }

    printf("Decimal equivalent = %d", decimal);

    return 0;
}
