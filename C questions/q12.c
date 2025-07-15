#include <stdio.h>

int main() {
    int num, sum = 0, remainder;
    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);
    // Calculate the sum of digits
    while (num != 0) {
        remainder = num % 10;
        sum += remainder;
        num /= 10;
    }
    // Print the result
    printf("Sum of digits: %d\n", sum);
    return 0;
}
