// C Program to Calculate the value of S where S = 1 + 1/2 + ... + 1/50.

# include <stdio.h>                                                         // Header file declaration

int main () {                                                               // main function definition

    float S = 0;                                                            // Variable initialization
    for (int i = 1;i <= 50;i++)
        S += (float)1/i;                                                    // Calculating S
    printf("\n S : %0.5f\n\n",S);                                           // Printing result        
    return 0;

}                                                                           // End of main function