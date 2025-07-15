#include <stdio.h>

int main() {
    int num, i, isPrime = 1;
    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);
    // Check if the number is prime
    if (num <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }
    // Print the result
    if (isPrime) {
        printf("%d is a prime number\n", num);
    } else {
        printf("%d is not a prime number\n", num);
    }
    return 0;
}
