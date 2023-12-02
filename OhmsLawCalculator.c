#include <stdio.h>

int main(){

    double R,I;
    char q = 'r';

    printf("Welcome to the Ohm's Law Calculator! Enter R and I, get V and P.\n\n");
    
    do{
        printf("\tEnter your resistance in Ohms: ");
        scanf("%lf", &R);
        printf("\tEnter your current in Amps: ");
        scanf("%lf", &I);
        printf("\n\tGiven I = %.2E Amps and R = %.2E Ohms\n", I,R);
        printf("\tLeads to V = %.2E Volts and P = %.2E Watts\n\n", I*R,I*I*R);    
        printf("\tPress any key to do another calculation or [q] to quit: ");
        scanf("%c", &q);      
    }while(q != 'q');
    

    


    return 0;
}