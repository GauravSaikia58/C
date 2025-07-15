#include <stdio.h>

int main() {
    FILE *file;
    char data[100];
    
    // Writing to file
    file = fopen("example.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }
    
    printf("Enter text to write to file: ");
    scanf(" %[^\n]", data);
    fprintf(file, "%s", data);
    fclose(file);
    
    // Reading from file
    file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }
    
    printf("\nFile contents:\n");
    while (fgets(data, sizeof(data), file) != NULL) {
        printf("%s", data);
    }
    fclose(file);
    
    return 0;
}
