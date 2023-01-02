// C Program to find Sum of Two numbers

# include <stdio.h>                                                         // Header file declaration

int main () {                                                               // main function definition

    int num1,num2;                                                          // Variable declaration
    printf("\n Enter two numbers \n");
    printf("\n Number 1 : ");
    scanf("%i",&num1);                                                      // User input Number 1
    printf("\n Number 2 : ");
    scanf("%i",&num2);                                                      // User input Number 2
    printf("\n %i + %i : %i\n\n",num1,num2,(num1+num2));                    // Calculating and printing result
    return 0;

}                                                                           // End of main function