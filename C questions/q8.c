#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1;
    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &n);
    // Calculate the factorial
    for (i = 1; i <= n; ++i) {
        factorial *= i;
    }
    // Print the result
    printf("Factorial of %d: %llu\n", n, factorial);
    return 0;
}
