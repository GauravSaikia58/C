#include <stdio.h>

int main() {
    int n, i;
    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &n);
    // Print the multiplication table
    printf("Multiplication table:\n");
    for (i = 1; i <= 10; ++i) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}
