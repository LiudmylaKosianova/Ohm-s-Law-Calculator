#include <stdio.h>

int main(){

    double R,I,V,P;
    char q;

    printf("Welcome to the Ohm's Law Calculator! Enter R and I, get V and P.\n\n");
    do{
        printf("\tEnter your resistance in Ohms: \n");
        scanf("%lf", &R);
        printf("\tEnter your current in Amps: \n");
        scanf("%lf", &I);
        
    
        printf("Press any key to do another calculation or [q] to quit: \n");

    }while(q != 'q');

    


    return 0;
}