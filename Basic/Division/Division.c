// C Program to divide a number by another number

# include <stdio.h>                                                         // Header file declaration

int main () {                                                               // main function definition

    float num1,num2;                                                        // Variable declaration
    printf("\n Enter the two numbers : ");
    scanf("%f%f",&num1,&num2);                                              // User input numbers
    if (num2 == 0)                                                          // Condition for division
        printf("\n Division not possible\n\n");                             
    else
        printf("\n %0.3f / %0.3f : %0.3f\n\n",num1,num2,(num1/num2));       // Printing Division result
    return 0;

}                                                                           // End of main function