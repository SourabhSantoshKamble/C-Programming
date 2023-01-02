// C Program to convert Days to weeks, months and year

# include <stdio.h>                                                             // Header file declaration

int main () {                                                                   // Main function definition

    int days = 0,weeks = 0,years = 0;                                           // Variable declaration
    printf("\n Enter the Number of days : ");
    scanf("%i",&days);                                                          // User input day
    years = days / 365;                                                         // Calculating values
    weeks = (days % 365) / 7;
    days -= ((years * 365) + (weeks * 7 ));                                                                           // End of while
    printf("\n The conversion \n");                                             // Printing results
    printf("\n Days : %i\n Weeks : %i\n Years : %i\n\n",days,weeks,years);
    return 0;
    
}                                                                               // End of main function