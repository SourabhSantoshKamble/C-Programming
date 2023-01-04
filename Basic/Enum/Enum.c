// C Program to create Enumerated data and print its value

# include <stdio.h>                                                             // Header file declaration

int main () {                                                                   // main function definition

    enum{Sunday,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday};             // Enumeration declaration
    printf("\n Sunday : %i",Sunday);                                            // Printing values of Enumerated data
    printf("\n Monday : %i",Monday);
    printf("\n Tuesday : %i",Tuesday);
    printf("\n Wednesday : %i",Wednesday);
    printf("\n Thursday : %i",Thursday);
    printf("\n Friday : %i",Friday);
    printf("\n Saturday : %i\n\n",Saturday);
    return 0;

}                                                                               // End of main function