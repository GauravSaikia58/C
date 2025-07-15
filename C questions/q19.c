#include <stdio.h>

int main() {
    int n, i, largest;
    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    // Input array elements
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Find the largest element
    largest = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    // Print the result
    printf("Largest element: %d\n", largest);
    return 0;
}
