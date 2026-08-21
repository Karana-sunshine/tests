#include<stdio.h>
int main()
{
    char str[100];
    printf("请输入一个字符串:\n");
    scanf("%s",str);
    char*p = str;
    while(1)
    {
        char c =*p;//利用指针获取字符串中的每一个字符，直到遇到\0为止
        if(c=='\0')//判断当前获取到的字符是否为结束标记
        {
            break;//如果是则循环结束
        }
        printf("%c\n",c);
        p++;
    }
    return 0;
}