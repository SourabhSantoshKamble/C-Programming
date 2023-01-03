// C Program to convert days to years,months and days

# include <stdio.h>                                                             // Header file declaration

int main () {                                                                   // main function definition

    int days,months,years;                                                      // Variable declaration
    printf("\n Enter the number of days : ");
    scanf("%i",&days);                                                          // User input days
    years = days / 365;                                                         // Calculating values
    months = (days % 365 )/30;
    days = days - (years * 365 + months * 30);
    printf("\n Y : M : D - %i : %i : %i\n\n",years,months,days);                // Printing Output   
    return 0;

}                                                                               // End of main function