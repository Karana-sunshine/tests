#include<stdio.h>
#include<string.h>
int main()
{
    //数据分类
    char str[100];
    printf("请输入数据:");
    scanf("%s",str);
    int smallCount =0;
    int largeCount =0;
    int numberCount =0;
    for(int i=0;i<strlen(str);i++)
    {
        if('a'<=str[i] && str[i]<='z')
        {
            smallCount++;
        }
       else if('A'<=str[i] && str[i]<='Z')
       {
            largeCount++;
       }
       else if('0'<=str[i] && str[i]<='9')
       {
            numberCount++;
       }
    }
    printf("其中小写字母有%d个\n",smallCount);
    printf("其中大写字母有%d个\n",largeCount);
    printf("其中数字有%d个\n",numberCount);
    return 0;
}