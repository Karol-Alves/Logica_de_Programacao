#include <stdio.h>

int n, number, c, cC, cCC;

int main (){
    printf("Enter the number of voters\n");
        scanf("%d" ,&n);
    for ( int i= 0; i < n; i++){
     printf("Candidate numbers:\n Candidate One = 1 \n Candidate Two = 2 \n Candidate Three = 3 \n");
        printf("Enter candidate number \n");
            scanf("%d" ,&number);

        if(number < 0 || number > 3){
        printf("Enter a new number\n");
        scanf("%d" ,&number);
        }
        
        if (number == 1){
        c++;
        }
         else if ( number == 2){
        cC++;
        }
        else{
        cCC++;
        }
    }

    printf ("Candidate one got %d votes \n " ,c);
    printf("Candidate two got %d votes \n" ,cC);
    printf ("Candidate three got %d votes \n" ,cCC);

    return 0;
}