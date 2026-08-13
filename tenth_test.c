#include<stdio.h>
int main()
{//求质数个数
    int n;
    printf("请输入一个整数:\n");
    scanf("%d",&n);
    int count = 0;
    for(int i = 1; i <=n ; i++)
    {
        for(int j = 2; j < i; j++)
        {
            if(i%j==0)
            {
                count++;
                break;
            }
        }
    }
    printf("小于%d的质数有%d个\n", n, n-count-1);
    return 0;
}