#include <stdio.h>

int main() {
    int n, t1 = 0, t2 = 1, nextTerm;
    // Input the number of terms from the user
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    // Print the Fibonacci series
    printf("Fibonacci Series: %d, %d, ", t1, t2);
    for (int i = 3; i <= n; ++i) {
        nextTerm = t1 + t2;
        printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
    return 0;
}
