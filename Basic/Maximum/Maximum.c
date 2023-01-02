// C Program to find the largest of three integers

# include <stdio.h>                                                                 // Header file declaration

int main () {                                                                       // main function definition

    int num1,num2,num3,large;                                                       // Variable declaration
    printf("\n Enter the three numbers \n");
    printf("\n Number 1 : ");
    scanf("%i",&num1);                                                              // User input Number 1                                                       
    printf("\n Number 2 : ");
    scanf("%i",&num2);                                                              // User input Number 2
    printf("\n Number 3 : ");
    scanf("%i",&num3);                                                              // User input Number 3
    large = (num1 > num2)?((num1>num3)?num1:num3):((num2>num3)?num2:num3);          // Calculating largest value
    printf("\n Largest value amongst %i,%i,%i is %i\n\n",num1,num2,num3,large);     // Printing result
    return 0;

}                                                                                   // End of main function