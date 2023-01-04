// C Program to print the value of sin(1/x)

# include <stdio.h>                                                             // Header file declaration
# include <math.h>
# include <stdlib.h>

int main () {                                                                   // main function definition

    float num,result;                                                           // Variable declaration
    printf("\n Enter the real value : ");
    scanf("%f",&num);                                                           // User input value
    if (num != 0)
        result = sin(1/num);                                                    // Calculating sin(1/x)
    else{
        printf("\n Value cannot be 0\n\n");                                     
        exit(0);                                                                // Terminating program
    } 
    printf("\n sin(1/%0.5f) : %0.5f \n\n",num,result);                          // Printing result                                                          
    return 0;

}                                                                               // End of main function