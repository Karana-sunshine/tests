#include<stdio.h>
int main()
{
    for(int i = 1; i <= 5; i++)//打印倒直角三角形
    {
        for(int j = 1; j <= 6-i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int i = 1; i <= 5; i++)//打印正直角三角形
    {
        for(int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}