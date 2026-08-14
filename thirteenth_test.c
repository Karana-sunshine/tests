#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
    srand(time(NULL));
    int number = rand()%100 + 1;
    printf("请在1~100内猜一个数字:\n");
    int guess;
    while(1)
    {
        scanf("%d",&guess);
        if(guess < number)
        {
            printf("猜小了，请再试一次:\n");
        }
        else if(guess > number)
        {
            printf("猜大了，请再试一次:\n");
        }
        else
        {
            printf("恭喜你，猜对了！\n");
            break;
        }
    }

}