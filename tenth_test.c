#include<stdio.h>
int main()
{//求质数个数，法一：判断每个数是否能被小于它的数整除，如果能整除就不是质数
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
                count++;//找到了一个整数能被n整除
                break;//后面其他数字就不需要再判断了
            }
        }
    }
    printf("小于%d的质数有%d个\n", n, n-count-1);
    
    //法二：使用时需要注释法一，否则会用随机值运行
    int number;
    printf("请输入一个整数:\n");
    scanf("%d",&number);

    int count3 = 0;
    for(int i = 2;i <= number; i++)
    {   
        int count2=0;
        for(int j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                count2++;
                break;
            }
        }
        if(count2==0)
        {
            count3++;
        }
    }
    printf("小于%d的质数有%d个\n", number, count3);
    return 0;
}