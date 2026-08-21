#include<stdio.h>
#include<string.h>
int main()
{
    //用户登录
    const char* rightUsername="zhangsan";
    const char* rightpassword="123456";
    char userName[100];
    char password[100];
    for(int i=1;i<=3;i++)
    {   
        printf("请输入用户名:\n");
        scanf("%s",userName);
        printf("请输入密码:\n");
        scanf("%s",password);
        if(strcmp(rightUsername,userName) == 0 && strcmp(rightpassword,password) == 0)
    {
        printf("登陆成功");
        break;
    }
    else
    {
        printf("登陆失败,还剩%d次机会",3-i);
    }
    }
    return 0;
}