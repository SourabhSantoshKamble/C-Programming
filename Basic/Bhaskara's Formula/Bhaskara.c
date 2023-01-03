// C Program to find the roots by using Bhaskara's formula

# include <stdio.h>                                                         // Header file declaration
# include <math.h>

int main () {                                                               // main function definition

    float a,b,c,temp;                                                       // Variable declaration
    printf("\n Enter the three floating numbers (a,b,c) : ");
    scanf("%f%f%f",&a,&b,&c);                                               // User input a,b,c
    temp = (b*b) - (4*a*c);                                                 // Calculating b*b - 4*a*c
    if (temp > 0 && a != 0){                                                // if condition for root validation
        double root1,root2;
        temp = sqrt(temp);
        root1 = (-b + temp)/(2*a);                                          // First root
        root2 = (-b - temp)/(2*a);                                          // Second root
        printf("\n Result\n Root1 : %0.3f\n Root2 :%0.3f\n\n",root1,root2); //Printing result

    }                                                                       // End of if    
    else
        printf("\n Invalid input\n\n");
    return 0;

}                                                                           // End of main function