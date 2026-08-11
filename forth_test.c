#include<stdio.h>
int main()
{
    int number;
    printf("请输入一个非负整数:\n");
    scanf("%d",&number);
    int n = 1; 
    while(n*n <= number)
    {
        n++;
    }
    printf("%d的算术平方根是:%d\n",number,n-1);
    return 0;
}