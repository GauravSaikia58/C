#include <stdio.h>

int main() {
    int n, i, x, found = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    
    printf("Enter elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter element to search: ");
    scanf("%d", &x);
    
    for (i = 0; i < n; i++) {
        if (arr[i] == x) {
            found = 1;
            break;
        }
    }
    
    if (found) {
        printf("Element found at position %d\n", i+1);
    } else {
        printf("Element not found\n");
    }
    return 0;
}
