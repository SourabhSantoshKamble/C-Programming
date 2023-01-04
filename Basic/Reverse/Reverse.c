// C Program to reverse a number

# include <stdio.h>                                                                     // Header file declaration

int main () {                                                                           // main function definition

    int rem,rev = 0,num,temp;                                                               // Variable declaration
    printf("\n Enter the number : ");
    scanf("%i",&num);                                                                   // User input number
    temp = num;                                                                         // Initializing temp
    while(temp != 0){                                                                   // while logic for reversing

        rem = temp%10;                                                                  // logic for reversing
        rev = rev*10 + rem;
        temp /= 10;

    }                                                                                   // End of while    
    printf("\n Reverse of %i is %i\n\n",num,rev);                                       // Printing results    

    return 0;

}                                                                                       // End of main function