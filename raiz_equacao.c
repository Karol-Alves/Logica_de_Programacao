#include <stdio.h>
#include <math.h>
 
int a, b ,c;
float Delta, x1, x2;

int main (){
    printf("Enter the coefficients\n");
    scanf("%d %d %d" ,&a ,&b ,&c);
 
    if (a == 0){
        printf("Enter another value: ");
        scanf("%d", &a);
    }
    //Delta
    Delta=((b*b) - (4*(a*c)));
    
    if ( Delta < 0){
        x1=0;
        x2=0;
        printf("There is no root, so %.1f and %.1f" ,x1 ,x2);
    }
    else if (Delta == 0){
        x2= ((-b) + sqrt(Delta)) / (2*a);
        x1 = x2;
        printf("The root is %.2f",x1);
    }
    else if (Delta > 0){
        x1 = ((-b) + sqrt(Delta)) / (2*a);
        x2 = ((-b) - sqrt(Delta)) / (2*a);
        printf("The roots are %.2f, and %.2f" ,x1 ,x2);
    }
    else {
        printf("Enter another value");
    }
 
 return 0;
}