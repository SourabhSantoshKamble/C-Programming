// C Program to find the area and perimeter of a triangle

# include <stdio.h>                                                                 // Header file declaration

int main () {                                                                       // main function definition

    int height = 7, width = 5;                                                      // Varaible declaration and initialization
    float perimeter, area;
    perimeter = (height + width) * 2;                                               // Calculating perimeter
    area =  height * width;                                                         // Calculating area
    printf("\n Area of Rectangle : %0.3f\n",area);                                  // Printing results
    printf("\n Perimeter of Rectangle : %0.3f\n\n",perimeter);
    return 0;

}                                                                                   // End of main function