#include <stdio.h>
float sal_at, aumento, sal_new;
int i=0;
int main (){
    
    for(i=0; i<25; i++){
    printf("\nQual o seu salario?\n");
    scanf("%f" ,&sal_at);
    

 if (sal_at<1.000){
        aumento=sal_at*0.3;
        sal_new=aumento+sal_at;
    }
    printf("\nO seu novo salario sera R$%.2f\n" ,sal_new);
    }
    return 0;
}