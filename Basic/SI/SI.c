// C Program to calculate the Simple Interest

# include <stdio.h>                                                                         // Header file declaration

int main () {                                                                               // main function definition

    float principal,rate,SI;                                                                // Variable declaration
    int time;
    printf("\n Enter the following details \n");
    printf("\n Principal : ");
    scanf("%f",&principal);                                                                 // User input principal
    printf("\n Rate of interest : ");
    scanf("%f",&rate);                                                                      // User input rate
    printf("\n Time / Period : ");
    scanf("%i",&time);                                                                      // User input time
    SI = (float)(principal * rate * time) / 100;                                            // Calculating simple interest
    printf("\n SI : %0.5f\n\n",SI);                                                         // Printing result
    return 0;

}                                                                                           // End of main function