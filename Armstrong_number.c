#include <stdio.h>

int main() {
    int num, original, remainder;
    int result = 0;

    // Input
    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    original = num;

    // Calculate sum of cubes of digits
    while (num != 0) {
        remainder = num % 10;
        result += remainder * remainder * remainder;
        num /= 10;
    }

    // Check Armstrong condition
    if (result == original)
        printf("%d is an Armstrong number.", original);
    else
        printf("%d is not an Armstrong number.", original);

    return 0;
}
