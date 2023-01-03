// C Program to print 3 number in n lines

# include <stdio.h>                                                                     // Header file declaration

int main () {                                                                           // main function definition

    int lines,count;                                                                    // Variable declaration
    printf("\n Enter the number of lines : ");
    scanf("%i",&lines);                                                                 // User input lines
    count = 0;
    while (lines != 0){                                                                 // while loop for iteration

        printf("%i ",++count);
        if (count %3 == 0){                                                             // if condition for 3 number in line

            lines--;
            printf("\n");
            
        }                                                                               // End of if
            
    }                                                                                   // End of while
    printf("\n");
    return 0;

}                                                                                       // End of main function