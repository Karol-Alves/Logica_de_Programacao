#include <stdio.h>

int age, n, acc;
float average;

int main (){
    printf("How many people will be calculated? \n");
    scanf("%d" ,&n);
    for( int i=0; i < n; i++){
        printf("Enter your age \n");
        scanf("%d" ,&age);
        if( age < 0){
            printf("Enter a new value\n");
            scanf("%d" ,&age);
        }
        acc += age;
    }
    average=acc/n;
    if (average > 0 && average <= 25){
        printf("The class is made up of young people\n");
    }
    else if (average >= 26 && average <= 60){
        printf("The class is made up of adults\n");
    }
    else{
        printf("The class is made up of seniors\n");
    }
return 0;    
}