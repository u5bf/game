#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int sj, N, s, count = 0;
    srand((unsigned)time(NULL));
    sj = rand() % 100 + 1; //sj为1~100之间的随机数
    scanf("%d", &N);       //N表示最多猜测的次数
    while (1)
    {
        scanf("%d", &s);
        getchar();
        if (s < 0)
        {
            printf("Game Over"); //如果在到达N次之前，用户输入了一个负数，也输出"Game Over"，并结束程序
            count = 0;
            break;
        }
        count++;
        if (count > N)
        {
            printf("Game Over");
            count = 0;
            break;
        }
        if (s > sj)
            printf("Too big\n");
        else if (s < sj)
            printf("Too small\n");
        else
            break;
    }
    if (count == 1)
        printf("Bingo!");
    else if (count <= 3 && count != 0)
        printf("Lucky You!");
    else if (count <= N && count != 0)
        printf("Good Guess!");
    return 0;
}
