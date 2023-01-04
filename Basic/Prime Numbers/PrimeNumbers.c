// c Program to print prime numbers from 1 to 200

# include <stdio.h>                                                             // Header files declaration

int main () {                                                                   // main function definition    

    int mark = 0,count = 0;                                                     // Variable initialization
    for (int i = 2;i <= 200;i++){                                               // for logic for iteration
        for (int j = 2;j <= i;j++){                                             // for logic for division

            if (i != j && i%j == 0){

                mark = 0;
                break;

            }
             mark = 1;   
        }                                                                       // End of for
        if (mark == 1){
            printf("%i ",i);                                                    // Printing result
            count++;
        }
            
        if (count == 10){                                                       // If logic for 20 numbers in a line

            printf("\n");                                                       
            count = 0;
        }                                                                       // End of if
    }                                                                           // End of for
    printf("\n\n");
    return 0;

}                                                                               // End of main function