#include<stdio.h>
int main()
{
    int n;
    printf("请输入一个整数: ");
    scanf("%d", &n);
    int reverse = 0;
    while(n != 0)
    {
        int temp = n%10;//取最右边的数字
        n = n/10;//去掉最右边的数字
        reverse = reverse * 10 + temp;//反转
    }
    printf("反转后的整数: %d\n", reverse);
    return 0;
}