#include <stdio.h>

int main() {
    int r, c, i, j;
    // Input the number of rows and columns
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);
    int a[r][c], b[r][c], sum[r][c];
    // Input first matrix
    printf("Enter elements of the first matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    // Input second matrix
    printf("Enter elements of the second matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    // Calculate the sum of the matrices
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    // Print the result
    printf("Sum of the matrices:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
