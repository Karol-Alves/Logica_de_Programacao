#include <stdio.h>
int x,y;
int main()
{
    do{
        printf("Digite o valor de x e y\n");
        scanf("%d %d" ,&x,&y);
    }
    while(x==y);
    printf("Ok!\n");
    if(x<y){
        printf("Crescente");
    }
    else if (y>x){
        printf("Decrescente");
    }
    return 0;
}