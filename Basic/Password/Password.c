// C Program to allow user to enter the password and display proper messages

# include <stdio.h>                                                             // Header file declaration

int main () {                                                                   // main function definition

    int password = 0;                                                           // Variable initialization    
    printf("\n Welcome User \n\n");
    while (1){                                                                  // while for infinite loop
        printf("\n Enter password : ");
        scanf("%i",&password);                                                  // User input password
        if (password == 1234)                                                   // Verifying password
            break;
        else
            printf("\n Incorrect password\n");

    }                                                                           // End of while
    printf("\n Correct Password\n\n");
    return 0;

}                                                                               // End of main function