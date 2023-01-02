//  C Program to find the area and perimeter of a circle for a given radius.

# include <stdio.h>                                                                     // Header file declaration
#define PI 3.14                                                                         // Defining PI

int main () {                                                                           // main function definition

    float radius;                                                                       // Variable declaration
    printf("\n Enter the radius of the circle : ");
    scanf("%f",&radius);                                                                // User input radius
    float area,perimeter;
    area = PI * radius * radius;                                                        // Calculating area
    perimeter = 2 * PI * radius;                                                        // Calculating perimeter
    printf("\n Area of Circle : %0.3f\n",area);                                         // Printing results
    printf("\n Perimeter of Circle : %0.3f\n\n",perimeter);            
    return 0;

}                                                                                       // End of main function