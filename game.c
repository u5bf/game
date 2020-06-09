#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int sj,N,s,count=0;
    scanf("%d%d",&sj,&N);
    while(1)
    {
        scanf("%d",&s);getchar();
        if(s<0) {
            printf("Game Over");
            break;
        }
        count++;
        if(count>N){
            printf("Game Over");
            break;
        }
        if(s>sj) printf("Too big\n");
        else if(s<sj) printf("Too small\n");
        else break;
    }
    if(count==1) printf("Bingo!");
    else if(count<=3&&count!=0) printf("Lucky You!");
    else if(count<=N&&count!=0) printf("Good Guess!");
    return 0;
}