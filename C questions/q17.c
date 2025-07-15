#include <stdio.h>

int main() {
    int num, count = 0;
    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);
    // Count the number of digits
    while (num != 0) {
        num /= 10;
        count++;
    }
    // Print the result
    printf("Number of digits: %d\n", count);
    return 0;
}
