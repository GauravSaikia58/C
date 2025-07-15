#include <stdio.h>

int main() {
    FILE *file1, *file2, *mergeFile;
    char ch;
    
    // Open first file
    file1 = fopen("file1.txt", "r");
    if (file1 == NULL) {
        printf("Cannot open file1.txt\n");
        return 1;
    }
    
    // Open second file
    file2 = fopen("file2.txt", "r");
    if (file2 == NULL) {
        printf("Cannot open file2.txt\n");
        fclose(file1);
        return 1;
    }
    
    // Create merged file
    mergeFile = fopen("merged.txt", "w");
    if (mergeFile == NULL) {
        printf("Cannot create merged.txt\n");
        fclose(file1);
        fclose(file2);
        return 1;
    }
    
    // Copy content of first file
    while ((ch = fgetc(file1)) != EOF) {
        fputc(ch, mergeFile);
    }
    
    // Copy content of second file
    while ((ch = fgetc(file2)) != EOF) {
        fputc(ch, mergeFile);
    }
    
    printf("Files merged successfully into merged.txt\n");
    
    fclose(file1);
    fclose(file2);
    fclose(mergeFile);
    
    return 0;
}
