// C Program to find the distance between two points

# include <stdio.h>                                                             // Header file declaration
# include <math.h>

int main () {                                                                   // main function definition

    float x1,x2,y1,y2,distance;                                                 // Variable declaration
    printf("\n Enter the co-ordinates \n");
    printf("\n x1: ");
    scanf("%f",&x1);                                                            // User input x1
    printf("\n y1: ");
    scanf("%f",&y1);                                                            // User input y1
    printf("\n x2: ");
    scanf("%f",&x2);                                                            // User input x2
    printf("\n y2: ");
    scanf("%f",&y2);                                                            // User input y2
    distance = sqrt(pow((x1 - x2),2) + pow((y2 - y1),2));                       // Calculating distance
    printf("\n The distance between the points (%0.3f,%0.3f) and (%0.3f,%0.3f) is %0.3f\n\n",x1,y1,x2,y2,distance);
    return 0;

}                                                                               // End of main function