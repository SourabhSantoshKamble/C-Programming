// C Program to check the Version of C being used

# include <stdio.h>                                                                     // Header file definition

int main () {                                                                           // main function definition

    if (__STDC_VERSION__ >= 201710L)
        printf("\n Current Version used is C18\n\n");
    else if (__STDC_VERSION__ >= 201112L)
        printf("\n Current Version used is C11\n\n");
    else if (__STDC_VERSION__ >= 199901L)
        printf("\n Current Version used is C99\n\n");
    else
         printf("\n Current Version used is C89/C90\n\n");
    
    return 0;

}                                                                                       // End of main function