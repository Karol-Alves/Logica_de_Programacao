#include <stdio.h>
float temperature, average;
int c, cC, acc;

int main (){
    for ( int i=0; i < 15; i++){
        printf("Enter a temperature \n");
        scanf("%f" ,&temperature);
            acc += temperature;
        if (temperature < 30){
            c++;
        }
        else {
            cC++;
        }   
    }
        average= acc/15;

    printf("%d temperatures are less than 30 C° \n" ,c);
    printf("%d temperatures are greater than 30 C° \n" ,cC);
    printf("The average temperature is %.2f C° \n" ,average);

    return 0;
}