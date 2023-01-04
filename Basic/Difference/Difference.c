// C Program to take 4 real numbers input and find the difference b/w max and min value

# include <stdio.h>                                                                     // Header file declaration

int main () {                                                                           // main function definition

    float num[4],max,min;                                                               // Array declaration & Variable declaration
    printf("\n Enter the four real numbers : ");
    max = 0,min = 10000;                                                                // Variable initialization
    for(int i = 0;i < 4;i++){                                                           // for logic for input and calculating max and min 

        scanf("%f",&num[i]);                                                            // User input numbers
        if (num[i] > max)                                                               // Comparing max value
            max = num[i];
        if (num[i] < min)                                                               // Comparing min value
            min = num[i];
    }                                                                                   // End of for
    printf("\n %f - %f : %f\n\n",max,min,(max-min));                                    // Printing result    
    return 0;

}                                                                                       // End of main function