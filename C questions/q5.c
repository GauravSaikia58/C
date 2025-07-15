#include <stdio.h>

int main() {
    int a, b;
    // Input two numbers from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    // Find the largest of the two numbers
    if (a > b) {
        printf("Largest number: %d\n", a);
    } else {
        printf("Largest number: %d\n", b);
    }
    return 0;
}
