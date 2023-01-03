// C Program to find square , cube of a number and print the Output

# include <stdio.h>                                                                 // Header file declaration

int main () {                                                                       // main function definition

    int lines,var = 1;                                                              // Varibale declaration and initialization
    printf("\n Enter the number of lines : ");
    scanf("%i",&lines);                                                             // User input lines
    while(lines){                                                                  // while logic for iteration

        printf("\n %i %i %i\n",var,var*var,var*var*var);                            // Printing Output
        var++;                                                                      // Increementing variable
        lines--;                                                                    // Decreementing lines

    }                                                                               // End of while
    printf("\n");
    return 0;

}                                                                                   // End of main function