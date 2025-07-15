#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    
    printf("Initial address: %p, value: %d\n", ptr, *ptr);
    
    ptr++;
    printf("After increment: %p, value: %d\n", ptr, *ptr);
    
    ptr += 2;
    printf("After adding 2: %p, value: %d\n", ptr, *ptr);
    
    ptr--;
    printf("After decrement: %p, value: %d\n", ptr, *ptr);
    
    return 0;
}
