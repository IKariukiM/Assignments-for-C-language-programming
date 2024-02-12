// code to calculate volume and surface area of cylinder
#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main() {
    int height; 
	float radius, volume, surface_area;

    // Prompt user to enter radius 
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);
    // Prompt user to enter height
    printf("Enter the height of the cylinder: ");
    scanf("%d", &height);

    // Calculate volume
    volume = PI * pow(radius, 2) * height;

    // Calculate surface area
    surface_area = 2 * PI * pow(radius, 2) + 2 * PI * radius * height;

    // Print the results
    printf("Volume of the cylinder: %.2f cubic units\n", volume);
    printf("Surface area of the cylinder: %.2f square units\n", surface_area);

    return 0;
}


