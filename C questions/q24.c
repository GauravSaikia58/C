#include <stdio.h>

int main() {
    int n, i, pos, value;
    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n + 1]; // Array size increased to accommodate new element
    // Input array elements
    printf("Enter elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Input position and value to insert
    printf("Enter position to insert (0 to %d): ", n);
    scanf("%d", &