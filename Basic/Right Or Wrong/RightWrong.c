// C Program to check if input is right or wrong based on certain conditions

# include <stdio.h>                                                             // Header file declaration

int main () {                                                                   // main function definition

    int p,q,r,s;                                                                // Variable declarations
    printf("\n Enter the four values \n p is even , q,r,s are positive\n\n ");
    scanf("%i%i%i%i",&p,&q,&r,&s);                                              // User input values
    if ((q > r && s > p)&& ((r+s)>(p+q)))                                      // Verifying conditions & printing results
            printf("\n Correct Values\n\n");
    else
            printf("\n Wrong Values\n\n"); 
return 0;

}                                                                               // End of main function