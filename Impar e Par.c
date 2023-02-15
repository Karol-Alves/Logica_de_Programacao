#include <stdio.h>
#include <math.h>

int number, c, cC;

int main (){
    for (int i= 0; i < 10; i++){
        printf("Enter the number\n");
        scanf("%d" ,&number);
        if (number % 2 == 0){
            c++;
        }
        else{
            cC++;
        }
    }
    printf("%d numbers are even\n" ,c);
    printf("%d numbers are odd\n" ,cC);
return 0;
}