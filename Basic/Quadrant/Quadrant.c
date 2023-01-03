// C Program to input Cartesian points and find out the quadrant

# include <stdio.h>                                                             // Header file declaration

int main () {                                                                   // main function definition

    int x,y;                                                                    // Variable declaration
    printf("\n Enter the cartesian points (x,y) : ");
    scanf("%i%i",&x,&y);                                                        // User input Cartesian points
    if (x == y && x== 0)
        printf("\n (%i,%i) belong to origin\n\n",x,y);
    else if(x >= 0 && y >= 0)                                                         // Verifying points and printing results
        printf("\n (%i,%i) belong to Quadrant I\n\n",x,y);     
    else if (x <= 0 && y >= 0)
        printf("\n (%i,%i) belong to Quadrant II\n\n",x,y);
    else if (x <= 0 && y <= 0)
        printf("\n (%i,%i) belong to Quadrant III\n\n",x,y);
    else
        printf("\n (%i,%i) belong to Quadrant IV\n\n",x,y);
    return 0;

}                                                                               // End of main function    