#include<stdio.h>
int main()
{   //给一个整数n，判断n是否为2的幂次方
    int n;
    printf("请输入一个整数n:\n");
    scanf("%d",&n);
    //for or while
    //已知结束条件，选择while循环
    while(n>1&&n%2==0)//判断循环结束的条件：1.结果是1时，可结束，yes；2结果无法被2整除时，也可结束，no.
    {
        n=n/2;
    }
    if(n==1)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
    return 0;
}