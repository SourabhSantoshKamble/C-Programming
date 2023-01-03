// C Program to convert seconds to hours, minutes and seconds

# include <stdio.h>                                                             // Header file declaration

int main () {                                                                   // main function definition

    int seconds,minutes,hours,input;                                            // Variable declaration
    printf("\n Enter the seconds : ");
    scanf("%i",&input);                                                         // User input seconds
    hours = input/3600;                                                         // Calculating values
    minutes = (input % 3600 ) / 60;
    seconds = input - (hours * 3600 + minutes * 60);
    printf("\n\n H : M : S - %i : %i : %i\n\n",hours,minutes,seconds); //Printing output
    return 0;

}                                                                               // End of main function