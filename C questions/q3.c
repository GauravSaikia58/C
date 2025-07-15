#include <stdio.h>
#define PI 3.14

int main() {
    float radius, area;
    // Input radius from the user
    printf("Enter radius: ");
    scanf("%f", &radius);
    // Calculate the area of the circle
    area = PI * radius * radius;
    // Print the result
    printf("Area of the circle: %.2f\n", area);
    return 0;
}
