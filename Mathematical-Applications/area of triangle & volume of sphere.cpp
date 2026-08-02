#include <stdio.h>

int main() {
    float base, height, radius;
    float area, volume;
    float pi = 3.14159;

    // Input for triangle
    printf("Enter base of the triangle: ");
    scanf("%f", &base);

    printf("Enter height of the triangle: ");
    scanf("%f", &height);

    // Calculate area of triangle
    area = 0.5 * base * height;

    // Input for sphere
    printf("Enter radius of the sphere: ");
    scanf("%f", &radius);

    // Calculate volume of sphere
    volume = (4.0 / 3.0) * pi * radius * radius * radius;

    // Display results
    printf("\n----- Results -----\n");
    printf("Area of Triangle = %.2f\n", area);
    printf("Volume of Sphere = %.2f\n", volume);

    return 0;
}
