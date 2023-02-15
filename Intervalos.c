#include <stdio.h>
int n;
int main()
{
    do{
        printf("Digite um numero no intervalo [5-10]\n");
        scanf("%d" ,&n);
    }
    while(n<5 || n>10);
    printf("Ok, dentro do intervalo\n");
    return 0;
}