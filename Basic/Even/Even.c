// C Program to print all even numbers form 1 to 50

# include <stdio.h>                                                         // Header file declaration

int main  () {                                                              // main function definition

    printf("\n Printing even numbers from 1 to 50\n\n");
    for (int i = 1; i <= 50; i++){                                          // for to iterate from 1 to 50
        if (i %2 == 0)
            printf("%i ",i);
        
    }                                                                       // End of for
    printf("\n\n");
    return 0;

}                                                                           // End of main function