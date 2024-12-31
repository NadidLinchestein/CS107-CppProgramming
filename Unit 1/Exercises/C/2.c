/*
    Write a C program to find the third angle of a triangle if two angles are given.
    
    Expected Output :
    Input two angles of triangle separated by comma : 50,70
    Third angle of the triangle : 60
*/

#include <stdio.h>

int main() {
    int angle1, angle2, angle3;

    // Prompt the user for the first two angles
    printf("Input two angles of triangle separated by comma : ");
    scanf("%d,%d", &angle1, &angle2);

    // Calculate the third angle
    angle3 = 180 - (angle1 + angle2);

    // Display the result
    printf("Third angle of the triangle : %d\n", angle3);

    return 0;
}
