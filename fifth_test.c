#include<stdio.h>
int main()
{
    int number;
    printf("请输入一个整数：\n");
    scanf("%d",&number);
    int reverse = 0;
    int n = number;
    if(number < 0)
    {
        number = -number;
    }
    while(number > 0)
    {
        int temp = number % 10;
        number = number / 10;
        reverse = reverse * 10 + temp;//反转
    }
    if(n == reverse)
    {
        printf("%d是回文数\n",n);
    }
    else
    {
        printf("%d不是回文数\n",n);
    }
    return 0;
}