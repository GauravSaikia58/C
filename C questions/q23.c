#include <stdio.h>

int main() {
    int r, c, i, j;
    // Input the dimensions of the matrix
    printf("Enter rows and columns of the matrix: ");
    scanf("%d %d", &r, &c);
    int a[r][c], transpose[c][r];
    // Input the matrix
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    // Calculate the transpose of the matrix
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            transpose[j][i] = a[i][j];
        }
    }
    // Print the result
    printf("Transpose of the matrix:\n");
    for (i = 0; i < c; i++) {
        for (j = 0; j < r; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}
