#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, length;
    int palindrome = 1;
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    length = strlen(str);
    
    // Check for palindrome
    for (i = 0; i < length/2; i++) {
        if (str[i] != str[length-i-1]) {
            palindrome = 0;
            break;
        }
    }
    
    if (palindrome) {
        printf("%s is a palindrome\n", str);
    } else {
        printf("%s is not a palindrome\n", str);
    }
    return 0;
}
