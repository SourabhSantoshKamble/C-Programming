// C Program to break an amount to different Bank notes

# include <stdio.h>                                                                 // Header file declaration

int main () {                                                                       // Main function definitiion

    int amount,newamount,hun,fif,twen,ten,five,two,one,temp;                        // Variable declaration
    printf("\n Enter the amount : ");
    scanf("%i",&amount);                                                            // User input amount
    hun = fif = twen = ten = five = two = one = 0;                                  // Variable initialization
    temp = amount;
    hun = temp / 100;                                                               // Calculating values
    temp %= 100;
    fif = temp / 50;
    temp %= 50;
    twen = temp /20;
    temp %= 20;
    ten = temp / 10;
    temp %= 10;
    five = temp / 5;
    temp %= 5;
    two = temp / 2;
    temp %= 2;
    one = temp;
    printf("\n The value can be divided into following bank notes \n");             // Printing result
    printf("\n Bank N0te : Quantity \n\n 100 : %i\n 50 : %i\n 20 : %i\n 10 : %i\n 5:%i\n 2 : %i\n 1 : %i\n\n",hun,fif,twen,ten,five,two,one);
    return 0;

}                                                                                   // End of main function