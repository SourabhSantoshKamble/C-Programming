// C Program to print the output of the series

# include <stdio.h>                                                             // Header files declaration

int main () {                                                                   // main function definition

    long int num,series = 0;                                                    // Variable declaration & initialization
    printf("\n Enter a number < 100 : ");
    scanf("%li",&num);                                                          // User input number
    int j = 1;                                                                  // Variable initialization
    if(num >= 1 && num <= 100){                                                 // if condition for input validation
        
        for (int i = 1;j <= num;i++){                                           // for logic for iteration

            series += (j*j*j*j);                                                // Calculating series
            j += i;                                                             // Increementing j

        }                                                                       // End of for
            
        printf("\n Result : %li \n\n",series);                                  // Printing result
    
    }                                                                           // End of if
    else
        printf("\n Invalid input\n\n");
    return 0;

}                                                                               // End of main function