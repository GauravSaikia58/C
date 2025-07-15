#include <stdio.h>

int main() {
    int a, b, gcd, lcm, temp_a, temp_b;
    // Input two numbers from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    temp_a = a;
    temp_b = b;
    // Calculate GCD
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    gcd = a;
    // Calculate LCM
    lcm = (temp_a * temp_b) / gcd;
    // Print the result
    printf("GCD: %d, LCM: %d\n", gcd, lcm);
    return 0;
}
