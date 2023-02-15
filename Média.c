#include<stdio.h>

float number,numberTwo,numberThree,total,average;
int n;

int main(){

printf("Enter the number of tests \n")
scanf("%d",&n);
    for(int i= 0; i < n ; i++){
        printf("Enter a value \n");
        scanf("%f" ,&number);
        printf("Enter a value \n");
        scanf("%f" ,&numberTwo);
        printf("Enter a value \n");
        scanf("%f" ,&numberThree);
    
    total=number*2+numberTwo*3+numberThree*5;
    average=total/10;
        printf("The average will be %.1f \n" ,average);
    }

    return 0;
}