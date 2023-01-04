// C Program to shift a given integer data by two bits to the left

# include <stdio.h>                                                                 // Header file declaration

int main () {                                                                       // main function definition

    int num,result;                                                                 // Variable declaration
    printf("\n Enter the number : ");
    scanf("%i",&num);                                                               // User input number
    num <<=2;                                                                       // Shifting value
    printf("\n Number after shifting by two bits to left : %i\n\n",num);            // Printing result
    return 0;

}                                                                                   // End of main function