#include <stdio.h>

int main() {
    int a, b, temp;
    // Input two numbers from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    // Swap the two numbers using a temporary variable
    temp = a;
    a = b;
    b = temp;
    // Print the swapped values
    printf("Swapped numbers: a = %d, b = %d\n", a, b);
    return 0;
}

