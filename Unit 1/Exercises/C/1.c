/*
    Write a C program that calculates the volume of a sphere.
    
    Expected Output:
    Input the radius of the sphere : 2.56
    The volume of sphere is 70.276237.
*/

#include <stdio.h>
#include <math.h>

int main() {
    float radius, volume;
    const float PI = 3.141592653589793;

    // Prompt the user for the radius
    printf("Input the radius of the sphere : ");
    scanf("%f", &radius);

    // Calculate the volume of the sphere
    volume = (4.0 / 3.0) * PI * pow(radius, 3);

    // Display the result
    printf("The volume of sphere is %.6f\n", volume);

    return 0;
}
