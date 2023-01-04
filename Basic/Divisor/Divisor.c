// C Program to find the Divisor's of a entered integer

# include <stdio.h>                                                                 // Header file declaration

int main () {                                                                       // main function definition

    int num;                                                                        // Variable declaration
    printf("\n\n Enter an integer to find its divisor's : ");
    scanf("%i",&num);                                                               // User input number
    printf("\n The divisors of %i are \n\n",num);
    for (int i = 1;i <= num;i++){                                                   // for logic for iteration

        if (num%i == 0)
            printf("%i ",i);                                                        // Printing divisors    

    }                                                                               // End of for
    printf("\n\n");
    return 0;

}                                                                                   // End of main function