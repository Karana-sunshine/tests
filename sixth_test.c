#include<stdio.h>
int main()
{
    int dividend;
    int divisor;
    printf("请输入被除数：\n");
    scanf("%d",&dividend);
    printf("请输入除数：\n");
    scanf("%d",&divisor);
    int count = 0;
    while( dividend >= divisor)
    {
        count++;
        dividend = dividend - divisor;
    }
    printf("商为：%d\n", count);
    printf("余数为：%d\n", dividend);
    return 0;
}