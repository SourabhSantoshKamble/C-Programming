// C Program to calculate average 

# include <stdio.h>                                                             // Header file declaration

int main () {                                                                   // main function definition

    float weight1,weight2;                                                      // Variable declaration
    int nop1,nop2;
    printf("\n Enter the following details \n\n Weight 1 : ");
    scanf ("%f",&weight1);                                                      // User input weight1
    printf("\n Number of Purchase : ");
    scanf("%i",&nop1);                                                          // User input nop1
    printf("\n Weight2 : ");
    scanf("%f",&weight2);                                                       // User input weight2
    printf("\n Number of purchase : ");
    scanf("%i",&nop2);                                                          // User input nop2
    float average;                                                              // Variable declaration
    average = (weight1 * nop1 + weight2 * nop2 ) / (nop1 + nop2);
    printf("\n Average : %0.4f\n\n",average);                                     // Printing output
    return 0;

}                                                                               // End of main function