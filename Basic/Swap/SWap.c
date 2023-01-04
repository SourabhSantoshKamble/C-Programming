// C Program to Swap two numbers without using third variable

# include <stdio.h>                                                                     // Header file declaration

int main () {                                                                           // main function definition

    int num1,num2;                                                                      // Variable declaration
    printf("\n Enter the two variables : ");
    scanf("%i%i",&num1,&num2);                                                          // User input values
    printf("\n Before Swapping\n");
    printf("\n Number 1 : %i \n Number 2 : %i\n\n",num1,num2);                          // Printing values before Swap
    num1 += num2;                                                                       // Swapping values
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("\n After Swapping\n");
    printf("\n Number 1 : %i \n Number 2 : %i\n\n",num1,num2);                          // Printing values after Swap
    return 0;

}                                                                                       // End of main function