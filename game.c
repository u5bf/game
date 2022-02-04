#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int random_number, N, s, count = 0;
    srand((unsigned)time(NULL));
    random_number = rand() % 100 + 1; // random_number为1~100之间的随机数
    printf("猜数游戏开始！\n");
    printf("请输入要猜的最大次数：");
    scanf("%d", &N); // N表示最多猜测的次数
    printf("请输入猜测的数字：\n");

    while (1)
    {
        if (count++ >= N)
        {
            printf("\nGame Over");
            printf("\n-----------------------\n");
            count = 0;
            break;
        }
        scanf("%d", &s);
        getchar();
        if (s < 0)
        {
            printf("\nGame Over"); //如果在到达N次之前，用户输入了一个负数，也输出"Game Over"，并结束程序
            printf("\n-----------------------\n");
            count = 0;
            break;
        }

        if (s > random_number)
            printf("Too big\n");
        else if (s < random_number)
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
